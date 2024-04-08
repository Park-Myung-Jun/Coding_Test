#include <stdio.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void test_10813(void)
{
 	int N, M, i, j, arr[100];
    scanf("%d %d", &N, &M);

    for(int idx = 0; idx < N; idx++)
    {
        arr[idx] = idx + 1;
    }

    for(int idx = 0; idx < M; idx++)
    {
        scanf("%d %d", &i, &j);
        swap(&arr[i - 1], &arr[j - 1]);
    }

    for(int idx = 0; idx < N; idx++)
    {
        printf("%d ", arr[idx]);
    }
}

int main(void)
{
	test_10813();

	return 0;
}
