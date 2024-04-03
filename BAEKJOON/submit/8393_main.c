#include <stdio.h>

void test_8393(void)
{
	int n;
	scanf("%d", &n);

	printf("%d\n", n * (n + 1) / 2);
}

int main(void)
{
	test_8393();

	return 0;
}
