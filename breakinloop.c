#include <stdio.h>

int main(){
    int i ,n ; 
    printf("Enter the number of times the code will run : ");
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
        printf("The value of i is %d\n",i);
        if (i == 5){
            printf("The loop is terminataed at i = 5\n");
            break;
        }
    }
    
    return 0;
}



// #include <stdio.h>

// int main(){
//     int i ,n ; 
//     printf("Enter the number of times the code will run : ");
//     scanf("%d",&n);
//     for ( i = 1; i < n; i++)
//     {
//         printf("The value of i is %d\n",i);
//         if (i == 5){
//             printf("The loop is terminataed after i = 5\n");
//             break;
//         }
//     }
    
//     return 0;
// }