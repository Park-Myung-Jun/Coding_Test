#include <stdio.h>

void test_10807(void)
{
    int N, arr[100] = {0}, v, v_count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == v)
        {
            v_count++;
        }
    }

    printf("%d\n", v_count);
}
