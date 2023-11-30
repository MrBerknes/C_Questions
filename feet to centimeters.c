#include <stdio.h>
int main()
{
    int feet;
    float centimeters;
    printf("please enter the lenght unit in feet\n");
    scanf("%d",&feet);
    centimeters = feet * 30.48;
    printf("%f centimeters:",centimeters);
    return 0;
    
}
