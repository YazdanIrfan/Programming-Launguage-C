#include <stdio.h>
//it is a infinite loop but there is no incrementing of the varaible i so whenever the condition is being checked its true
// and it is printing teh same intitalized value if u which is 0
int main(){
    int i = 0;
    while (i<10){
        printf("The value of i is : %d\n",i);
    }
    return 0;
}