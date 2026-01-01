#include <stdio.h>
float gravity (float m){
    printf("Enter the mass : ");
    scanf("%f",&m);
    printf("The force exerted by earth on the body of mass %f is %.2f N",m,m*9.8); //%.2f makes teh float print only two digit after the decimal
    return m*9.8;
}
int main(){
    float m;
    gravity(m);
    return 0;
}