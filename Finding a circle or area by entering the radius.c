#include <stdio.h>
#define Pi 3.14
int main()
{
    int x;
    float r, C ,P ; 
   
    printf("please enter x for circle or perimeter\n");
    scanf("%d",&x);
    if (x%2!=0)
    {
        printf("please enter radious\n");
        scanf("%f",&r);
        C=Pi*r*r;
        printf("circle :%f",C);
    }
    else
    {
        printf("please enter radious\n");
        scanf("%f",&r);
        P=2*Pi*r;
        printf("perimeter :%f",P);
    }    
    return 0;
}
