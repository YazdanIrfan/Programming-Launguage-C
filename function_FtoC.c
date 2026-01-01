#include <stdio.h>


float celcius(float a){
    float f;
    f = ( (9*a)/5) + 25 ;
    printf("The temp in Fahrenheit is : %f\n",f);
    return f = ((9*a)/5) + 25 ;
}
int main(){
    float x;
    printf("Enter the celcius :");
    scanf("%f",&x);
    celcius(x);
    return 0;
}