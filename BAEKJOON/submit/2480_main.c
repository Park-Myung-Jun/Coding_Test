#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

void test_2480(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (A == B && B == C)
	{
		printf("%d\n", 10000 + A * 1000);
	}
	else if (A == B || B == C)
	{
		printf("%d\n", 1000 + 100 * B);
	}
	else if (C == A)
	{
		printf("%d\n", 1000 + 100 * A);
	}
	else
	{
		printf("%d\n", MAX(A, MAX(B, C)) * 100);
	}
}

int main(void)
{
	test_2480();

	return 0;
}
