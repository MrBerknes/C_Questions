#include <stdio.h>

int main()
{
    int vize,final,number,not;
    scanf("%d",&number);
    scanf("%d",&vize);
    scanf("%d",&final);
    not=(vize*(0,4))+(final*(0,6));
    if(not>=60)
        printf("geçtiniz");
    else
        printf("kaldınız");
    printf("%d\n",number);
    return 0;
}
