#include <stdio.h>

int main(){
    //Here we assign the numberof value we are going to input therefore....
    // int cgpa[3]={5,6,9};
    // printf("The value of digit at index 1 is %d\n",cgpa[1]);
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("The cgpa of stduents at index %d are %d\n",i,cgpa[i]);
    // }
    

    // // we always dont have to assign the input to teh function....as teh assigning of the index will be done in the orer of 0->1->2 and so on

    int cgpa[]={4,8,9,0,4,7,2,8,4,9,7,2,1,5,3};
    for (int i = 0; i < 15; i++)
    {
        printf("The cgpa of stduents at index %d are %d\n",i,cgpa[i]);
        printf("The cgpa of stduents at index %d are %d has an address of %p or %u\n",i,cgpa[i],&cgpa[i],&cgpa[i]);
    }//the address of memeory blocks are continous in an array and we can see that with the code as it runs
    return 0;
}