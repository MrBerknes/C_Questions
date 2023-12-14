#include<stdio.h>
int main()
{
    int array[10],number,counter;
    for(counter=0;counter<10;counter++)
    {
        printf("enter a number:",counter);
        scanf("%d",&array[counter]);
    }
    for(counter=9;counter>=0;counter--)
    {
        printf("%d,",array[counter]);
    }
    return 0;
}