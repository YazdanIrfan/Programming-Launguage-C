#include <stdio.h>

int main(){
    float c;
    printf("Enter the celcius Value :");
    scanf("%f",&c);
    float f;
    f = ((9/5)*c)+32;
    printf("The value of Celcius %f in Fahrenheit is %f",c,f);
    return 0;
}