 #include <stdio.h>
 
 int main(){
    int cgpa[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the cgpa of the students : \n");
        scanf("%d",&cgpa[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The cgpa of the students : %d\n",cgpa[i]);
        printf("The address of cgpa of the students at the index %d is %u\n",i,&cgpa[i]);

    }
    return 0;
 }