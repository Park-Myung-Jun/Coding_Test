#include <stdio.h>

#define DAY_MINUTE (24 * 60)

void test_2525(void)
{
	int A, B, C, time;
	scanf("%d %d %d", &A, &B, &C);
	time = (A * 60 + B + C) % DAY_MINUTE;
	printf("%d %d\n", time / 60, time % 60);
}

int main(void)
{
	test_2525();

	return 0;
}
