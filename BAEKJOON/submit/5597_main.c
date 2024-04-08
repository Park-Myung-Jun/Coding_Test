#include <stdio.h>

void test_5597(void)
{
 	int student[30] = {0}, get_num;

    for(int i = 0; i < 28; i++)
    {
        scanf("%d", &get_num);
        student[get_num - 1]++;
    }

    for(int i = 0; i < 30; i++)
    {
        if(student[i] == 0)
        {
            printf("%d\n", i + 1);
        }
    }
}

int main(void)
{
	test_5597();

	return 0;
}
