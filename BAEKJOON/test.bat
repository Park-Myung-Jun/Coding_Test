@echo off

if not exist result\ mkdir result

for /L %%i in (1,1,1) do (
	type input\15552_%%i.txt | main.exe > result\15552_%%i.txt
	fc /W output\15552_%%i.txt result\15552_%%i.txt
)
