#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d,max,i;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int array[4]={a,b,c,d};
    max=array[0];
    for(i=0;i<4;i++){
        if(array[i]>max){
            max=array[i];
        }    
    }
    printf("%d",max);
    return 0;
}