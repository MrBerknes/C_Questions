#include <stdio.h>
int main() 
{
    int number1, number2 ,val, x;
    printf("please enter number!\n");
    scanf("%d",&number1);
    printf("please enter number!\n");
    scanf("%d",&number2);
    printf("please enter x\n");
    scanf("%d", &x);
    if (x%2==0)
    {
        val=number1+number2;
    }
    else
    {
        val=number1-number2;
    }
    printf("val :%d",val);
    return 0;
}
