#include <stdio.h>

void test_2562(void)
{
 	int get_num, position = 0, max_num = 0;

    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &get_num);

        if(max_num < get_num)
        {
            max_num = get_num;
            position = i + 1;
        }
    }

    printf("%d\n%d\n", max_num, position);
}

int main(void)
{
	test_2562();

	return 0;
}
