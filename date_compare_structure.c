// making a vector using structure in c 
#include <stdio.h>
//using typedef to avoid writing struct complex again and again and changing it to com
typedef struct date{
    int dd;
    int mm;
    int yyyy;
}dat;

int comapre(dat d1 ,dat d2);
int comapre(dat d1 ,dat d2){
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy)
    {
        return 0;
    }


    if (d1.dd >d2.dd)
    {
        return 1;
    }


    if (d1.dd < d2.dd)
    {
        return -1;
    }


    if (d1.mm > d2.mm)
    {
        return 1;
    }


    if (d1.mm >d2.mm)
    {
        return -1;
    }


    if (d1.yyyy >d2.yyyy)
    {
        return 1;
    }


    if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    
    

}

int main(){
    dat d1 = {22,04,2005};
    dat d2 = {28,02,2024};

    printf("%d",comapre(d1,d2));

    return 0;
}