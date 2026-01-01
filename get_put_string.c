#include <stdio.h>

int main(){
    char st[6];
    printf("Enter  a multi word string : ");
    gets(st); //used to take a multi line string as asn input 
    puts(st); // will print the next line in the next line without using \n in the code
    // printf("The entered string is : %s",st); //will print everything in one line if \n not used 
    printf("Hello!");
    return 0;
}