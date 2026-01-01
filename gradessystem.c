#include <stdio.h>

int main(){
    int grades ;
    printf("Enter the grades : ");
    scanf("%d",&grades);
    if (grades <= 100 && grades >= 90){
        printf("A");
    }
    else if (grades <= 90 && grades >= 80){
        printf("B");
    }
    else if (grades <= 80 && grades >= 70){
        printf("C");
    }
    else if (grades <= 70 && grades >= 60){
        printf("D");
    }
    else if (grades <= 60 && grades >= 50){
        printf("E");
    }
    else {
        printf("You failed");
    }
    return 0;
}