#include <stdio.h>
int main()
{
    int number,counter,x;
    counter=1;
    number=2;
    while (counter<10)
    {
        x=number*number;
        printf(" number:%d \n",x);
        
        counter=counter+1;
        number=number+1;
    }
    return 0;
}
