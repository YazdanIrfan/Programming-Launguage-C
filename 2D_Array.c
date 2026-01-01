#include <stdio.h>

int main(){
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of array aray[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
        
    }
    

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The value of array aray[%d][%d] : %d\n",i,j,array[i][j]);
        }
        
    }

    /// to print it in a matrix form
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}