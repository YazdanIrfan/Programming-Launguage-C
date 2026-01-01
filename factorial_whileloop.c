//Increamenting operator

#include <stdio.h>

int main(){
    int i = 1,fac = 1,n;
    printf("Enter a number :");
    scanf("%d",&n);
    while (i <= n)
    {
        fac = fac*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fac);
    return 0;
}

//Decrementing operator
// #include <stdio.h>

// int main(){
//     int fac = 1,n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     while (n >= 1)
//     {
//         fac = fac*n;
//         --n;
//     }
//     printf("Factorial of %d is %d", n ,fac);
//     return 0;
// }