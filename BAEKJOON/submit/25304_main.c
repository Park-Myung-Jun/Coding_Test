#include <stdio.h>

void test_25304(void)
{
	int X, N, a, b, sum = 0;
	scanf("%d %d", &X, &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		sum = sum + a * b;
	}

	if (sum == X)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}

int main(void)
{
	test_25304();

	return 0;
}
