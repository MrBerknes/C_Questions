#include<stdio.h>
int main(){
    int n;
    printf("enter a number pentagon value=",n);    
    scanf("%d",&n);
    int pentagonNumber[n];
    for(int i=0;i<n;i++){
        pentagonNumber[i] = (i * (3 * i - 1)) / 2;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",pentagonNumber[i]);
    }
    return 0;
}