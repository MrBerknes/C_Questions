#include <stdio.h>
struct musteri{
	int hesapNo;
	char soyad[25];
	char ad[30];
	double bakiye;
};
typedef struct musteri musteri;;
int main(){
	musteri hesapBilgi = {0,"","",0.0};	
	FILE *myPtr;
	if((myPtr = fopen("musteri.dat","r+")) == NULL)
	printf("Dosya Acilamadi");
	else{
		printf("Hesap No Gir (1-100 arasi deger)\n Veri girisini bitirmek icin 0 gir");
		scanf("%d",&hesapBilgi.hesapNo);
		
		while(hesapBilgi.hesapNo != 0){
			printf("Soyad Ad ve Bakiye Gir : ");		
        	fscanf(stdin,"%s%s%lf",hesapBilgi.soyad,hesapBilgi.ad,&hesapBilgi.bakiye);
			fseek(myPtr,(hesapBilgi.hesapNo -1)*sizeof(musteri), SEEK_SET);
     		fwrite(&hesapBilgi,sizeof(musteri),1,myPtr);
			printf("Hesap No Gir (1-100 arasi deger)\n Veri girisini bitirmek icin 0 gir");
			scanf("%d",&hesapBilgi.hesapNo);
		}	
		fclose(myPtr); 	
	}
	return -1;
}
