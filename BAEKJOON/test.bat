@echo off

if not exist result\ mkdir result

for /L %%i in (1,1,1) do (
	type input\10818_%%i.txt | main.exe > result\10818_%%i.txt
	fc /W output\10818_%%i.txt result\10818_%%i.txt
)
