#include <stdio.h>

void test_2438(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(void)
{
	test_2438();

	return 0;
}
