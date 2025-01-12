#include<stdio.h>
int obeb(int a,int b){
    if(b==0)
        return a;
    return (b, a%b);
}
int main(){
    int number1 ,number2;
    printf("enter number1:");
    scanf("%d",&number1);
    printf("enter number2:",number1);
    scanf("%d",&number2);
    int result = obeb(number1,number2);
    printf("obeb(%d,%d)=%d \n",number1,number2,result);
    return 0;
}