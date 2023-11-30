#include <stdio.h>
int main()
{
int number;
    printf("please enter number:\n");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("%d the entered number is even",number);
    }
    else
    {
         printf("%d the entered number is odd",number);
    }
    return 0;
}
