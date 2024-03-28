@echo off

if not exist result\ mkdir result

for /L %%i in (1,1,1) do (
	type input\10172_%%i.txt | main.exe > result\10172_%%i.txt
	fc /W output\10172_%%i.txt result\10172_%%i.txt
)
