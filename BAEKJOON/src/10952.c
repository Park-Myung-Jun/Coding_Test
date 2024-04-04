#include <stdio.h>
#include <stdbool.h>

void test_10952(void)
{
    int A, B;

    while (true)
    {
        scanf("%d %d", &A, &B);

        if (A == 0 && B == 0)
        {
            break;
        }

        printf("%d\n", A + B);
    }
}
