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
	if((myPtr = fopen("musteri.dat","r")) == NULL)
	printf("Dosya Acilamadi");
	else{
	printf("%-10s%-16s%-11s%10s\n","Hesap No","Soyad","Ad","Bakiye");
	while(!feof(myPtr)){ 
	fread(&hesapBilgi, sizeof(musteri),1,myPtr);	
		if(hesapBilgi.hesapNo != 0)
		printf("%-10d%-16s%-11s%10.2f\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);
	}	
	fclose(myPtr);
	}
	return -1;
}


