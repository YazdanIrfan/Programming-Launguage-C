#include <stdio.h>
#include <string.h>

int main(){
    //Incrementing the ascii value of the word by 1 for each letter
    char str[100] = "Hello World";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    
    printf("%s\n",str);

    //Decrement the ascii value of the word by 1 for each letter
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("%s\n",str);
    return 0;
}