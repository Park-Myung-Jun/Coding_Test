#include <stdio.h>

void test_10810(void)
{
 	int N, M, i, j, k, arr[100] = {0};
    scanf("%d %d", &N, &M);

    for(int idx = 0; idx < M; idx++)
    {
        scanf("%d %d %d", &i, &j, &k);

        for(int idx2 = i - 1; idx2 < j; idx2++)
        {
            arr[idx2] = k;
        }
    }

    for(int idx = 0; idx < N; idx++)
    {
        printf("%d ", arr[idx]);
    }
    printf("\n");
}

int main(void)
{
	test_10810();

	return 0;
}
