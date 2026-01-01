#include <stdio.h>

int main(){
    int i ,n ; 
    printf("Enter the number of times the code will run : ");
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
        if (i == 5){
            printf("The loop skipped the output at i = 5\n");
            continue;
        }
        printf("The value of i is %d\n",i);
        
    }
    
    return 0;
}