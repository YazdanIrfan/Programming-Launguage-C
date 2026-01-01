#include <stdio.h>

int main(){
    // Here initaialled the uder defined value 
    int a ;
    int b ;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    //initialed the operators output value
    float add = a+b;
    float sub = a-b;
    float div = a/b;
    float mul = a*b;
    float mod = a%b;  //returns remainder and can calculate only for integer values no float value allowed
    printf("%f\n",add);
    printf("%f\n",sub);
    printf("%f\n",div);
    printf("%f\n",mul);
    printf("%f\n",mod);
    return 0;
}