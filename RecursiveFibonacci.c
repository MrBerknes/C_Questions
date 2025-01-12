#include <stdio.h>
long fibonacci(long n){
    if(n==0 || n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main(void){
    long i,n;
    printf("how many fibonacci number?:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("number %d: %ld\n",i,fibonacci(i));
    }
    return 0;
}