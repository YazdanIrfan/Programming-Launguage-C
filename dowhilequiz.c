#include <stdio.h>

int main(){
    int n,i ; 
    printf("Enter how many times would you like to run the loop : ");
    scanf("%d",&n);
    i = 1 ;
    do
    {
        printf("The value of i is %d\n",i);
        i = i+1;
    } while (i<=n);
    
    return 0;
}