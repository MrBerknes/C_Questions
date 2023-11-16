#include <stdio.h>

int main() 
{
    int r,cevre,alan,x,pi;
    printf("1 veya 2 giriniz");
    scanf("%d",&x);
    pi=3;
    printf("yarıçap giriniz");
    scanf("%d",&r);
    if (x=1)
    {
        cevre=(2*pi*r);
        printf("C: %d",cevre);
    }
    else if (x=2)
    {
        alan=(pi*r*r);
        printf("A: %d",alan);
            
    }
    else
    {
            printf("yanlıs değer girdiniz");
    }   
    
    return 0;
}