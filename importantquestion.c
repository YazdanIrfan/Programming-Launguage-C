#include <stdio.h>

int main(){
    int n=4;
    printf("%d %d %d",n,++n,n++); /*here as the variable are all same so the priority is notdefined so the 
    compiler is taking the execution order as left to right and therefore leading to answer that is not 4,5,5 
    as this answer is based on left to right exection of program......in the interview we will have to
    conclude that both the answer are corect as the execution order or direction is not defined.*/
    return 0;
}