#include<stdio.h>
int main()
{
    int number1,number2;
    float number3,number4;
    scanf("%d",&number1);
    scanf("%d",&number2);
    scanf("%f",&number3);
    scanf("%f",&number4);
    printf("%d %d\n",number1+number2,number1-number2);
    printf("%.1f %.1f",number3+number4,number3-number4);
    return 0;
}