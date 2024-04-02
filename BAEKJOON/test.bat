@echo off

if not exist result\ mkdir result

for /L %%i in (1,1,3) do (
	type input\2480_%%i.txt | main.exe > result\2480_%%i.txt
	fc /W output\2480_%%i.txt result\2480_%%i.txt
)
