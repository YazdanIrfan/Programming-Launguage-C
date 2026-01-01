// //Using Incrementing operator

// #include <stdio.h>

// int main(){
//     int i,fac = 1,n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for ( i = 1 ; i <= n ; i++)
//     {
//         fac = fac*i ; 
//     }
//     printf("Factorial of %d is %d",n,fac);
//     return 0;
// }

//Using decremnting operator
#include <stdio.h>

int main(){
    int i,fac = 1,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for ( i = n ; i >= 1 ; --i)
    {
        fac = fac*i ; 
    }
    printf("Factorial of %d is %d",n,fac);
    return 0;
}