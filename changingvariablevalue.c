#include <stdio.h>
int change(int* a){
    *a = 10*(*a);
    // printf("The value of a is : %d\n",a);
    return 0;
}
int main(){
    int x = 5;
    printf("The value of x is : %d\n",x);
    change(&x);
    printf("The value of x is : %d\n",x);
    return 0;
}