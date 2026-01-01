#include <stdio.h>

int main()
{
    int mark[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &mark[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("The marks at index %d is %d", i, mark[i]);
    }

    return 0; 
}