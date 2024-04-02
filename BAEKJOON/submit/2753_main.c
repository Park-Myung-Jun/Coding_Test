#include <stdio.h>
#include <stdbool.h>

bool Is_Leap_Year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return true;
	}

	return false;
}

void test_2753(void)
{
	int year;
	scanf("%d", &year);

	if (Is_Leap_Year(year) == true)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}

int main(void)
{
	test_2753();

	return 0;
}
