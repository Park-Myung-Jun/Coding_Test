#include <stdio.h>

void test_15552(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
}

int main(void)
{
	test_15552();

	return 0;
}
