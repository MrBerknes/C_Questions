#include <stdio.h>
int main()
{
    int C;
    printf("please enter the temperature:\n");
    scanf("%d", &C);
    if (C>=0)
    {
        printf("temputer is above freezing");
    }
    else
    {
        printf("temputer is below freezing");
    }
    return 0;
}
