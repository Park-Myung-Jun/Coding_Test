#include <stdio.h>

#define DAY_MINUTE (60 * 24)

void test_2884(void)
{
    int H, M, time;
    scanf("%d %d", &H, &M);
    time = (DAY_MINUTE + 60 * H + M - 45) % (DAY_MINUTE);
    printf("%d %d\n", time / 60, time % 60);
}
