/*Klavyeden -1 girilene kadar girilen sayilari diziye aktaran, ardından her elemanin karesini
ekrana basan programi yaziniz.*/
#include<stdio.h>
int main()
{
    int array[10],counter,x;
    counter=0;
    printf("enter number(-1 ends at pressure):");
    scanf("%d",&array[counter]);
    while(array[counter]!=-1)
    {
        counter++;
        printf("enter a number(-1 ends at presure):");
        scanf("%d",&array[counter]);
    }
    printf("elements of array:\n");
    for(x=0;x<counter;x++)
    {
        printf("%d",array[x]);
    }
    printf("\nsquares of the elements of the array:\n");
    for(x=0;x<counter;x++)
    {
        printf("%d",array[x]*array[x]);
    }
    return 0;
}