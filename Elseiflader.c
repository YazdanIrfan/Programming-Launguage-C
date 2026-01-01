#include <stdio.h>

int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age>=18){
        printf("You can drive"); //if this is true then no other condition will be checked after it 
    }
    else if (age>60){
        printf("You can drive and you are a senior citizen");//it will only be checked if the previous condition is not verified 
    }
    else if (age>35){
        printf("You can drive and you are an elder");//it will only be checked if the previous condition is not verified 
    }
    else {
        printf("You are not allowed to drive");//this will be checked when no condition of if and else if is true....this else is an optional condition ista not always needed to run the program
    }
    return 0;
}