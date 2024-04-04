#include <stdio.h>

void test_10951(void)
{
    int A, B;

    // while (scanf("%d %d", &A, &B) != EOF)
    while (scanf("%d %d", &A, &B) == 2)
    {
        printf("%d\n", A + B);
    }
}
