#include <stdio.h>

int main(){
    int a[3][3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter the value of for address of array : %u or %p\n",&a[i][j][k]);
            }
            
        }
        
    }
    return 0;
}