#include <stdio.h>
int sum(int* a ,int* b){
    *a=9;
    printf("The sum of numbers are %d\n",*a+*b);
    return *a+*b;
}
int main(){
    int x =1; 
    int y = 2;
    sum(&x,&y);
    printf("The value of x is : %d\n",x);//here the value of x will cchange to 9 as we used the addres to change it
    return 0;
}