#include <stdio.h>

void test_2739(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}
}

int main(void)
{
	test_2739();

	return 0;
}
