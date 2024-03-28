@echo off

set argc=0
for %%i in (%*) do set /A argc+=1

:: argc restrict
if %argc% neq 2 (
	echo how to use : %0 [problem num] [test case num]
	exit /b 1
)

:: make files -> main.c inc/p_num.h src/p_num.c obj input/tc_num.txt output/tc_num.txt 
:: Makefile test.bat

if not exist obj\ mkdir obj

:: main.c
echo #include "inc/%1.h"> main.c
echo.>> main.c
echo int main(void)>> main.c
echo {>> main.c
echo 	test_%1();>> main.c
echo.>> main.c
echo 	return 0;>> main.c
echo }>> main.c

if not exist inc\ mkdir inc

:: inc/p_num.h
echo #ifndef __%1_H> inc\%1.h
echo #define __%1_H>> inc\%1.h
echo.>> inc\%1.h
echo void test_%1(void);>> inc\%1.h
echo.>> inc\%1.h
echo #endif // __%1_H>> inc\%1.h

if not exist src\ mkdir src

:: src/p_num.c
echo #include ^<stdio.h^>> src\%1.c
echo.>> src\%1.c
echo void test_%1(void)>> src\%1.c
echo {>> src\%1.c
echo. 	>> src\%1.c
echo }>> src\%1.c

if not exist output\ mkdir output
if not exist input\ mkdir input

:: input/tc_num.txt, output/tc_num.txt
set p_num=%1
for /L %%i in (1,1,%2) do (
	type NUL > output\%p_num%_%%i.txt
	type NUL > input\%p_num%_%%i.txt
)

::Makefile
echo CC = gcc>Makefile
echo DEFAULT_OPTION = -c -o>>Makefile
echo RESULT = main.exe>>Makefile
echo.>>Makefile
echo OBJ_PATH = obj>>Makefile
echo SRC_PATH = src>>Makefile
echo INC_PATH = inc>>Makefile
echo.>>Makefile
echo MAIN = main>>Makefile
echo MAIN_OBJ = $(OBJ_PATH)\$(MAIN).o>>Makefile
echo MAIN_SRC = $(MAIN).c>>Makefile
echo.>>Makefile
echo TARGET = %1>>Makefile
echo TARGET_OBJ = $(OBJ_PATH)\$(TARGET).o>>Makefile
echo TARGET_SRC = $(SRC_PATH)\$(TARGET).c>>Makefile
echo TARGET_INC = $(INC_PATH)\$(TARGET).h>>Makefile
echo.>>Makefile
echo RESULT_DEPENDENCY = $(TARGET_INC) $(MAIN_OBJ) $(TARGET_OBJ)>>Makefile
echo.>>Makefile
echo # can't work 16-bit program in win11, so -m64 option add>>Makefile
echo # need minGW 64bit in 64bit OS>>Makefile
echo.>>Makefile
echo $(RESULT) : $(RESULT_DEPENDENCY)>>Makefile
echo 	$(CC) -o $(RESULT) $(RESULT_DEPENDENCY) -m64>>Makefile
echo.>>Makefile
echo $(MAIN_OBJ) : $(TARGET_INC) $(MAIN_SRC)>>Makefile
echo 	$(CC) $(DEFAULT_OPTION) $(MAIN_OBJ) $(MAIN_SRC)>>Makefile
echo.>>Makefile
echo $(TARGET_OBJ) : $(TARGET_INC) $(TARGET_SRC)>>Makefile
echo 	$(CC) $(DEFAULT_OPTION) $(TARGET_OBJ) $(TARGET_SRC)>>Makefile
echo.>>Makefile
echo clean:>>Makefile
echo 	del /f $(OBJ_PATH)\*.o $(RESULT)>>Makefile

::test.bat
::echo @echo off> test.bat
::echo set argc=0>> test.bat
::echo for %%%%i in (%%*) do set /A argc+=1>> test.bat
::echo if %%argc%% neq 1 exit /b 1>> test.bat
::echo.>> test.bat
::echo for /L %%%%i in (1,1,%2) do (>> test.bat
::echo 	if exist result\%p_num%_%%%%i.txt (>> test.bat
::echo 	main.exe ^> result\%p_num%_%%%%i.txt>> test.bat
::echo 	fc /W output\%p_num%_%%%%i.txt result\%p_num%_%%%%i.txt>> test.bat
::echo 	) else (>> test.bat
::echo 		set tmp=%%%%i>> test.bat
::echo 		set /a ret=tmp-1>> test.bat
::echo 		echo case exist until %%ret%%>> test.bat
::echo 		exit /b 2>> test.bat
::echo 	)>> test.bat
::echo )>> test.bat

echo @echo off> test.bat
echo.>> test.bat
echo if not exist result\ mkdir result>> test.bat
echo.>> test.bat
echo for /L %%%%i in (1,1,%2) do (>> test.bat
echo 	type input\%p_num%_%%%%i.txt ^| main.exe ^> result\%p_num%_%%%%i.txt>> test.bat
echo 	fc /W output\%p_num%_%%%%i.txt result\%p_num%_%%%%i.txt>> test.bat
echo )>> test.bat

::echo end!
::exit /b 0

::submit/p_num_main.c
if not exist submit\ mkdir submit

echo #include ^<stdio.h^>> submit\%1_main.c
echo.>> submit\%1_main.c
echo void test_%1(void)>> submit\%1_main.c
echo {>> submit\%1_main.c
echo. 	>> submit\%1_main.c
echo }>> submit\%1_main.c
echo.>> submit\%1_main.c
echo int main(void)>> submit\%1_main.c
echo {>> submit\%1_main.c
echo 	test_%1();>> submit\%1_main.c
echo.>> submit\%1_main.c
echo 	return 0;>> submit\%1_main.c
echo }>> submit\%1_main.c