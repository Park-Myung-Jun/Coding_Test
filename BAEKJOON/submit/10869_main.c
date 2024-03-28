#include <stdio.h>

void test_10869(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);
}

int main(void)
{
	test_10869();

	return 0;
}
