#include <stdio.h>
/*The condition here is alwayas true as 2 is always less than 10 but according to the code
the value of i keep of incrementing and the code keep on executing itself as a infinite loop printing the value of i*/
int main(){
    int i = 0;
    while (2<10){
        printf("The value of i is : %d\n",i);
        i++; //i=i+1
    }
    return 0;
}