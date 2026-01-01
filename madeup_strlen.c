#include <stdio.h>

int main(){
    char str[] = "Eminem";
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count  = i-1;
    printf("The length of the string is %d",count);
    return 0;
}