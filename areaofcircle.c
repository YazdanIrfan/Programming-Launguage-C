#include<stdio.h>

int main(){
    float r;
    printf("Enter the radius of the circle :");
    scanf("%f",&r);
    float areaofcircle;
    areaofcircle = 3.14*r*r ;
    printf("Area of the circle = %f", areaofcircle);
    return 0;
}