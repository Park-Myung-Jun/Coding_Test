#include <stdio.h>

#define MAX_NUM 42

void test_3052(void)
{
    int get_num, rest[MAX_NUM] = {0}, diff = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &get_num);

        rest[get_num % MAX_NUM]++;
    }

    for (int i = 0; i < MAX_NUM; i++)
    {
        if (rest[i] != 0)
        {
            diff++;
        }
    }

    printf("%d\n", diff);
}
