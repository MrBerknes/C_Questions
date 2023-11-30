#include <stdio.h>
int main()
{
    int A,B,C;
    printf("please enter A :\n");
    scanf("%d",&A);
    printf("please enter B :\n");
    scanf("%d",&B);
    printf("please enter C :\n");
    scanf("%d",&C);
    if (A>B)
    {
        printf("A more than B");
        if(A>C)
        {
            printf("%d largest number :",A);
        }
        else
        {
            printf("%d largest number :", C);
        }
        
    }
    else
    {
        printf("B more than A\n");
        if(B>C)
        {
            printf("largest number B");
        }
        else
            printf("largest number C");
    }
    return 0;
