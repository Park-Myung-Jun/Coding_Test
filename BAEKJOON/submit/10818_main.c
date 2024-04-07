#include <stdio.h>
#include <limits.h>

void test_10818(void)
{
	int N, min = INT_MAX, max = INT_MIN, input_num;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input_num);
		if (input_num < min)
		{
			min = input_num;
		}
		if (max < input_num)
		{
			max = input_num;
		}
	}

	printf("%d %d\n", min, max);
}

int main(void)
{
	test_10818();

	return 0;
}
