#include <stdio.h>

void reverse_num(int *arr, int a, int b)
{
    int tmp, mid = (a + b + 1) / 2;

    for (int i = a; i < mid; i++)
    {
        tmp = arr[i];
        arr[i] = arr[a + b - i];
        arr[a + b - i] = tmp;
    }
}

void test_10811(void)
{
    int N, M, i, j, nums[100];

    scanf("%d %d", &N, &M);

    for (int idx = 0; idx < N; idx++)
    {
        nums[idx] = idx + 1;
    }

    for (int idx = 0; idx < M; idx++)
    {
        scanf("%d %d", &i, &j);

        reverse_num(nums, i - 1, j - 1);
    }

    for (int idx = 0; idx < N; idx++)
    {
        printf("%d ", nums[idx]);
    }
}
