#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    do{
        sum += 1;
        i++;
    } while (i <= 10);
    printf("The sum of first natural number is %d", sum);
    return 0;
}