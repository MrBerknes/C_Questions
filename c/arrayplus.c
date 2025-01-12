#include<stdio.h>
int sum(int numbers[],int y){
    if(y==0)
        return numbers[0];
    return numbers[y]+sum(numbers,y-1);
}
int main(){
    int numbers[]={3,5,7,9,1,2};
    int result = sum (numbers,5);
    printf("sonuc= %d \n",result);
    return 0;
}