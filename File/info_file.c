#include<stdio.h>
typedef enum cinsiyet{
    bay=0,
    bayan
}cinsiyet;
typedef struct {
    char ad[20];
    int yas;
    cinsiyet c;
}kisi;
int main(){
    kisi kisi;
    FILE *p;
    if((p=fopen("bilgi.txt","w+"))==NULL){
        printf("dosya açilamadi");
        return 1;
    }
    if((scanf("%s %d %d",kisi.ad,&kisi.yas,&kisi.c))!=3){
        //scanf("%s %d %d",kisi.ad,&kisi.yas,&kisi.c);
        return 1;
    }
    fprintf(p,"%s %d %d",kisi.ad,kisi.yas,kisi.c);
    rewind(p);
    fclose(p);
    //fscanf(p,"%s %d %d",kisi.ad,&kisi.yas,&kisi.c);
    printf("%s %d %d",kisi.ad,kisi.yas,kisi.c);
    
    return 0;
}