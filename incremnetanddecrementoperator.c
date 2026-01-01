#include <stdio.h>

int main(){
    int i = 10;
    printf("The number is %d\n",i);
    i = i + 1;
    printf("The number is %d\n",i);
    i++;
    printf("The number is %d\n",i);
    printf("The number is %d\n",i++);
    printf("The number is %d\n",i);
    printf("The number is %d\n",++i);
    i = i -1 ;
    printf("The number is %d\n",--i);
    i = i -2 ;
    printf("The number is %d\n",i);
    i -=2;
    printf("The number is %d\n",i);
    return 0;
}