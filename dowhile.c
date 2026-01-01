#include <stdio.h>
//in do-while loop the code is executed atleast oens and then the condition is checked to again run the given code
int main(){
    int i = 0 ; 
    do{ //here the "do" is making it strictly making it execute the statement
        printf("The value of i is %d\n",i);
        i++; // Incrementing
    } while (i<=5); //checking condition to decide either the code runs again or not
    return 0;
}