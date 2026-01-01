#include<stdio.h>

int main(){
    int l;
    int b;
    printf("Enter the length : \n");
    scanf("%d",&l);
    printf("Enterthe breath : \n");
    scanf("%d",&b);
    int a = l*b ;
    printf("Area of the rectangle = %d", a);
    return 0;
}