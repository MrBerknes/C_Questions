#include <stdio.h>
void main()
{
    float array[13];
    float sum=0;
    float avarage;
    int counter;
    printf("enter 13 float valuables: \n");
    for(counter=0;counter<=13;counter++)
    {
        scanf("%f",&array[counter]);
        sum=sum+array[counter];
    }
    avarage=sum/13;
    printf("avarage of entered values: %.2f\n",avarage);
    return 0;
}