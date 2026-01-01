// making a vector using structure in c 
#include <stdio.h>
//using typedef to avoid writing struct complex again and again and changing it to com
typedef struct complex{
    int real;
    int imaginary ;
}com;

int main(){
    com z1; //defining the complex number with typedef
    int a ,b; 
    printf("Enter the real part : ");
    scanf("%d",&a);
    printf("Enter the real part : ");
    scanf("%d",&b);
    z1.real = a; //assigning user input vlaue to real part 
    z1.imaginary = b;//assigning user input vlaue to imaginary part 
    printf("z = %d + i%d",z1.real,z1.imaginary);
    return 0;
}