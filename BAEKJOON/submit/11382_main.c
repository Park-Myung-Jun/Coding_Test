#include <stdio.h>
#include <stdint.h>

void test_11382(void)
{
	int64_t A, B, C;
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld\n", A + B + C);
}

int main(void)
{
	test_11382();

	return 0;
}
