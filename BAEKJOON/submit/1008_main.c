#include <stdio.h>

void test_1008(void)
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.10lf", a / b);
}

int main(void)
{
	test_1008();

	return 0;
}
