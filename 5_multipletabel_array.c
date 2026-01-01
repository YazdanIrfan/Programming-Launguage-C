#include <stdio.h>

int main(){
    int table[10];
    //  for (int i = 0; i < 10; i++)
    //  {
    //     table[i] = 5* (i+1);
    //  }
    
    //  for (int i = 0; i < 10; i++)
    //  {
    //     printf(" 5 X %d = %d\n",(i+1),table[i]);
    //  }
     

     //taking user input
   int n;
   printf("Enter the number for the table you need : ");
   scanf("%d",&n);

   for (int i = 0; i < 10; i++)
   {
      table[i]= n*(i+1);
   }
   
   for (int i = 0; i < 10; i++)
   {
      printf("%d X %d = %d\n",n,(i+1),table[i]);
   }
   
    return 0;
}