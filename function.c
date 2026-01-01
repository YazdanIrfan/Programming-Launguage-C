#include <stdio.h>

//function defination
int sum(int x, int y, int z){
    printf("The sum is :%d",x+y+z);
    return x+y+x;
}
int main(){
    sum (5,7,0); //function call

    return 0;
}