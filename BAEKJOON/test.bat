@echo off

if not exist result\ mkdir result

for /L %%i in (1,1,1) do (
	type input\10951_%%i.txt | main.exe > result\10951_%%i.txt
	fc /W output\10951_%%i.txt result\10951_%%i.txt
)
