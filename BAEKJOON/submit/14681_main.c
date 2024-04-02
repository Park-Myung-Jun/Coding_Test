#include <stdio.h>

void test_14681(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	if (0 < x)
	{
		if (0 < y)
		{
			printf("1\n");
		}
		else
		{
			printf("4\n");
		}
	}
	else
	{
		if (0 < y)
		{
			printf("2\n");
		}
		else
		{
			printf("3\n");
		}
	}
}

int main(void)
{
	test_14681();

	return 0;
}
