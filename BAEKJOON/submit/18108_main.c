#include <stdio.h>

void test_18108(void)
{
	int year;
	scanf("%d", &year);
	printf("%d\n", year - 543);
}

int main(void)
{
	test_18108();

	return 0;
}
