@echo off
rem common
set SRC_DIR="./Proto/Common/"
set CPP_DST_DIR="../cpp/Common/"
set CS_DST_DIR="../cs/Common/"

del /s /Q %CPP_DST_DIR%
del /s /Q %CS_DST_DIR%

for %%i in (%SRC_DIR%*.proto) do (
	protoc  -I=%SRC_DIR% --cpp_out=%CPP_DST_DIR% %%i
	protoc  --csharp_out=%CS_DST_DIR% %SRC_DIR%%%i
)

rem Login
set SRC_DIR="./Proto/Login/"
set CPP_DST_DIR="../cpp/Login/"
set CS_DST_DIR="../cs/Login/"

del /s /Q %CPP_DST_DIR%
del /s /Q %CS_DST_DIR%

for %%i in (%SRC_DIR%*.proto) do (
	protoc  -I=%SRC_DIR% --cpp_out=%CPP_DST_DIR% %%i
	protoc  --csharp_out=%CS_DST_DIR% %SRC_DIR%%%i
)

rem Game
set SRC_DIR="./Proto/Game/"
set CPP_DST_DIR="../cpp/Game/"
set CS_DST_DIR="../cs/Game/"

del /s /Q %CPP_DST_DIR%
del /s /Q %CS_DST_DIR%

for %%i in (%SRC_DIR%*.proto) do (
	protoc  -I=%SRC_DIR% --cpp_out=%CPP_DST_DIR% %%i
	protoc  --csharp_out=%CS_DST_DIR% %SRC_DIR%%%i
)

rem ServerCommon
set SRC_DIR="./Proto/ServerCommon/"
set CPP_DST_DIR="../cpp/ServerCommon/"

del /s /Q %CPP_DST_DIR%

for %%i in (%SRC_DIR%*.proto) do (
	protoc  -I=%SRC_DIR% --cpp_out=%CPP_DST_DIR% %%i
)

rem Chat
set SRC_DIR="./Proto/Chat/"
set CPP_DST_DIR="../cpp/Chat/"
set CS_DST_DIR="../cs/Chat/"

del /s /Q %CPP_DST_DIR%
del /s /Q %CS_DST_DIR%

for %%i in (%SRC_DIR%*.proto) do (
	protoc  -I=%SRC_DIR% --cpp_out=%CPP_DST_DIR% %%i
	protoc  --csharp_out=%CS_DST_DIR% %SRC_DIR%%%i
)

rem SubGame
set SRC_DIR="./Proto/SubGame/"
set CPP_DST_DIR="../cpp/SubGame/"
set CS_DST_DIR="../cs/SubGame/"

del /s /Q %CPP_DST_DIR%
del /s /Q %CS_DST_DIR%

for %%i in (%SRC_DIR%*.proto) do (
	protoc  -I=%SRC_DIR% --cpp_out=%CPP_DST_DIR% %%i
	protoc  --csharp_out=%CS_DST_DIR% %SRC_DIR%%%i
)


echo Successful!
pause