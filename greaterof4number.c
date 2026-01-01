#include <stdio.h>

int main(){
    float a,b,c,d ;
    printf("Enter a  : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("Enter c : ");
    scanf("%f",&c);
    printf("Enter d : ");
    scanf("%f",&d);
    if (a>b && a>c && a>d){
        printf("%f is the greater number",a);
    }
    else if (b>a && b>c && b>d){
        printf("%f is the greater number",b);
    }
    else if (c>b && c>a && c>d){
        printf("%f is the greater number",c);
    }
    else if (d>b && d>c && d>a){
        printf("%f is the greater number",d);
    }
    return 0;
}