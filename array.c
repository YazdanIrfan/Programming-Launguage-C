#include <stdio.h>

int main(){
    int mark[5]; //as we are assigning 5 memeory location we will have i value from 0 to 4 
    //thats is if we assign n memeoty location the value of i will be from o to n-1
    mark[0]=99;
    mark[1]=55;
    mark[2]=45;
    mark[3]=89;
    mark[4]=23;
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("The mark of stduents are %d and %d\n",i,mark[i]);
    }
    
    printf("The mark of 2 stduents are %d and %d\n",mark[0],mark[1]);
    return 0;
}