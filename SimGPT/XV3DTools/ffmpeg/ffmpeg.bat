set SCRIPT_PATH=%~dp0
set PATH=%SCRIPT_PATH%;%PATH%
@echo off
setlocal
REM 输入mp4视频，抽帧图像，最大分辨率是1920，默认4fps

REM 检查输入参数
if "%~1"=="" (
    echo 请提供输入视频文件名作为参数。
    exit /b
)

REM 检查帧率参数
if "%~2"=="" (
    set "fps=4"
) else (
    set "fps=%~2"
)

REM 检查最大帧数参数
if "%~3"=="" (
    set "max_frames=1001"
) else (
    set "max_frames=%~3"
)

REM 获取输入视频的路径和文件名
set "inputFilePath=%~1"
for %%I in ("%inputFilePath%") do (
    set "inputDirectory=%%~dpI"
)

REM 创建 input 文件夹
if not exist "%inputDirectory%input" mkdir "%inputDirectory%input"

REM 提取视频帧并调整分辨率
if not "%max_frames%"=="" (
    ffmpeg -i "%inputFilePath%" -vf "fps=%fps%,scale='if(gt(iw,ih),min(1920,iw),-2)':'if(gt(ih,iw),min(1920,ih),-2)',select=lt(n\,%max_frames%)" "%inputDirectory%input\output_%%04d.png"
) else (
    ffmpeg -i "%inputFilePath%" -vf "fps=%fps%,scale='if(gt(iw,ih),min(1920,iw),-2)':'if(gt(ih,iw),min(1920,ih),-2)'" "%inputDirectory%input\output_%%04d.png"
)

echo output %fps% to %inputDirectory%input
