#include <stdio.h>

int main(){
    int i,n;
    printf("Enter the number who's table is to be written : ");
    scanf("%d",&n);
    for ( i = 10; i > 0 ; i--){ 
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}