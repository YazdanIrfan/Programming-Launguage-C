#include <stdio.h>
float avg(float,float,float);
   
float avg(float a, float b, float c ){
    float d ;
    d = (a+b+c)/3;
    // printf("The avg of there number is : %f\n",d);
    printf("The avg of there number is : %f\n",(a+b+c)/3);
    return ((a+b+c)/3) ;
}


int main(){
    float a,b,c ;
    printf("Enter a number : ");
    scanf("%f",&a);
    printf("Enter a number : ");
    scanf("%f",&b);
    printf("Enter a number : ");
    scanf("%f",&c);
    avg(a,b,c);
    return 0;
}