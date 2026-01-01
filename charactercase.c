#include <stdio.h>
//Checking wheather an acharacter is lowercase or not
int main(){
    char ch ;
    printf("Enter a character  : "); //taking user input
    scanf("%c",&ch);
    printf("You entered : %c\n",ch);
    printf("The ASCII value of the enter character '%c' is %d\n",ch,ch);
    if (ch >= 97 && ch <= 122){ //ASCII values for lower case is between [97,122], so we verify it from there
        printf("The entered character is in lowercase\n");
    }
    else { 
        printf("Enter character is not lower case\n"); //bcz there are few character which are special character and are neither lower nor uppercase
    }
    return 0;
}