#include <stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

int fibonacci (int n){
    if (n == 1 || n == 2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2); // recursion
    // printf("%d", fibonacci(n-1) + fibonacci(n-2));
}

int main(){
    int n;
    printf("Enter the value of n for the position you looking for : ");
    scanf("%d",&n);
    printf("The value of the %d postion in the fibonacci series is %d",n,fibonacci(n));
    return 0;
}