#include <stdio.h>
#include <string.h>

void test_10926(void)
{
	char str[64] = {0};
	scanf("%s", str);
	strcat(str, "?\?!");
	printf("%s\n", str);
}

int main(void)
{
	test_10926();

	return 0;
}
