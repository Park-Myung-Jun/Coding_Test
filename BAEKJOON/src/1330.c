#include <stdio.h>

void test_1330(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (A > B)
    {
        printf(">");
    }
    else if (A < B)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }
}
