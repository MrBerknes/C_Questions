#include<stdio.h>
int binary(int num){
    if(num==0){
        printf("0");
        return ;
    }
    binary(num/2);
    printf("%d",num % 2);
}
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",& num);
    printf("binayr:");
    binary(num);
    printf("\n");
    return 0;
}
/*
void ikilik_yazdir(int sayi) {
    if (sayi == 0) {
        printf("0");
        return;
    }
    ikilik_yazdir(sayi / 2);
    printf("%d", sayi % 2);
}
int main() {
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("Sayinin ikilik tabandaki gosterimi: ");
    ikilik_yazdir(sayi);
    printf("\n");
    return 0;
}*/