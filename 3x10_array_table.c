#include <stdio.h>

int main(){
    int a[3][10]; //assigning array for the storage of tables
    int n[3];//array for 3 differnt number for different nmber
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&n[i]); //taking user input for different number
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = n[i] * (j+1); //making the table and putting it in the 2D array.........we use j+1 as j starts frm j=0
        }
        
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of array[%d][%d] is %d\n",i,j,a[i][j]);
        }
        printf("\n");
    }
    return 0;
}