//program to check is a number is even or odd
// else block is not necesary to execute the code , the code will run even if the else statemnt/condition is absent
#include <stdio.h>

int main(){
    int a; 
    printf("Enter a number : "); //Taking the user input
    scanf("%d",&a);
    if (a%2==0){ //Veriying the condition
        printf("The number inserted is an even number"); //condition verified output even
    }
    else { //if condition not verified output odd
        printf("The number inserted is an odd number");
    }
    return 0;
}