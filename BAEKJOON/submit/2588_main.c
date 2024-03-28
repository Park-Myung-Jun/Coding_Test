#include <stdio.h>

void test_2588(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("%d\n", num1 * (num2 % 10));
	printf("%d\n", num1 * (num2 / 10 % 10));
	printf("%d\n", num1 * (num2 / 100 % 10));
	printf("%d\n", num1 * num2);
}

int main(void)
{
	test_2588();

	return 0;
}
