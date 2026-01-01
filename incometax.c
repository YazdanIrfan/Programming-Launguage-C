#include <stdio.h>

int main(){
    float income,tax ; 
    printf("Enter your income : ");
    scanf("%f",&income);
    if (income<250000){
        printf("No tax to be paid \n");
        printf("You have to pay a TAX of Rs.%f",tax=0);
    }
    else if (income<=500000 && income>= 250000){
        printf("You have to pay a TAX of Rs.%f",tax= 0.05 *(income - 250000));
    }
    else if (income<=1000000 && income>= 500000){
        printf("You have to pay a TAX of Rs.%f",tax= 0.05 *(500000 - 250000) + 0.2 * (income - 500000));
    }
    else{
        printf("You have to pay a TAX of Rs.%f",tax = 0.05 *(500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000));
    }
    return 0;
}