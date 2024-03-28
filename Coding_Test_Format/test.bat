@echo off

if not exist result\ mkdir result

for /L %%i in (1,1,1) do (
	type input\1000_%%i.txt | main.exe > result\1000_%%i.txt
	fc /W output\1000_%%i.txt result\1000_%%i.txt
)
