#include <stdio.h>

struct musteri{
	int hesapNo;
	char soyad[25];
	char ad[30];
	double bakiye;
};

typedef struct musteri musteri;

int secimGir(void);
void textDosya(FILE *);
void kayitGuncelle(FILE *);
void yeniKayit(FILE *);
void kayitSil(FILE *);
void listele(FILE *);

int main(){
	
	FILE *myPtr;
	int secim;
	
	if((myPtr = fopen("musteri.dat","r+")) == NULL)
	printf("Dosya Acilamadi");
	else {
		while((secim = secimGir()) != 6){
			switch(secim){
				case 1 : textDosya(myPtr); break;
				case 2 : kayitGuncelle(myPtr); break;
				case 3 : yeniKayit(myPtr); break;
				case 4 : kayitSil(myPtr); break;
				case 5 : listele(myPtr); break;		
			}
		}
		fclose(myPtr);
	}
	return -1;
}

int secimGir(){
	int secim;
	printf("\nSecimini Yap\n1-musteri.dat dosyasinin icergini formatli olarak \"hesaplar.dat\" dosyasina yaz\n2-Hesap Guncelle\n3-Yeni Hesap Ekle\n4-Hesap Sil\n5-musteri.dat dosyasinin icerigini listele\n6-cikis \n ");
	scanf("%d",&secim);
	return secim;
}

void textDosya(FILE *okuPtr){ 
	FILE *yazPtr;
	musteri hesapBilgi = {0,"","",0.0};
	if((yazPtr = fopen("hesaplar.dat","w")) == NULL)
		printf("Dosya Acilamadi");
	else{
		rewind(okuPtr);
		fprintf(yazPtr,"%-10s%-16s%-11s%10s\n","HesapNo","Soyad","Ad","Bakiye");
		while(!feof(okuPtr)){ 
		fread(&hesapBilgi,sizeof(musteri),1,okuPtr);
		if(hesapBilgi.hesapNo!=0) 
			fprintf(yazPtr,"%10d%-16s%-11s%10.2f\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);
		}
		fclose(yazPtr);
		}	
}
void kayitGuncelle(FILE *fPtr){
	int hesapID;
	double islemMiktari;
	musteri hesapBilgi = {0,"","",0};
	printf("G�ncellenecek Hesap No Gir : [1-100]");
	scanf("%d",&hesapID);
	fseek(fPtr,(hesapID-1)*sizeof(musteri),SEEK_SET);
	fread(&hesapBilgi,sizeof(musteri),1,fPtr);
	if(hesapBilgi.hesapNo == 0)
	printf("%d nolu hesap icin bilgi girilmemis");
	else{
		printf("%-10d%-16s%-11s%10.2f\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);
		printf("Hesaba yatacak (+) veya hesaptan cekilece (-) tutari gir");
		scanf("%lf",&islemMiktari);
		hesapBilgi.bakiye += islemMiktari;
		printf("%-10d%-16s%-11s%10.2f\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);
	fseek(fPtr,(hesapID-1)*sizeof(musteri), SEEK_SET);
	fwrite(&hesapBilgi,sizeof(musteri),1,fPtr);
	}
}

void kayitSil(FILE *fPtr){
	musteri hesapBilgi, bosHesap = {0,"","",0.0};
	int hesapID;
	printf("Silinecek hesap no gir [1-100] : ");
	scanf("%d",&hesapID);
	fseek(fPtr, (hesapID -1)* sizeof(musteri), SEEK_SET);
	fread(&hesapBilgi,sizeof(musteri),1,fPtr);
	if(hesapBilgi.hesapNo == 0) 
	printf("Silinecek %d nolu hesap yok",hesapID);
	else{
		fseek(fPtr,(hesapID-1)*sizeof(musteri),SEEK_SET);
		fwrite(&bosHesap,sizeof(musteri),1,fPtr);
	}
}

void yeniKayit(FILE *fPtr){
	int hesapID;
	musteri hesapBilgi = {0,"","",0.0};
	printf("Yeni Hesap No Gir [1-100]: ");
	scanf("%d",&hesapID);
	fseek(fPtr, (hesapID -1 )*sizeof(musteri), SEEK_SET);
	fread(&hesapBilgi,sizeof(musteri),1,fPtr);
	if(hesapBilgi.hesapNo != 0)
	printf("Burada zaten bir veri mevcut yani buraya yazamazsin");
	else {
	printf("Soyad Ad ve Bakiye Gir : ");
	scanf("%s%s%lf",hesapBilgi.soyad,hesapBilgi.ad,&hesapBilgi.bakiye);
	hesapBilgi.hesapNo = hesapID;
	fseek(fPtr, (hesapID -1 )*sizeof(musteri), SEEK_SET);
	fwrite(&hesapBilgi, sizeof(musteri),1,fPtr);
	}
}

void listele(FILE *fPtr){
	rewind(fPtr);
	musteri hesapBilgi = {0,"","",0.0};
	printf("%-10s%-16s%-11s%10s\n","HesapNo","Soyad","Ad","Bakiye");
	while(!feof(fPtr)){
		fread(&hesapBilgi,sizeof(struct musteri),1,fPtr);
		if(hesapBilgi.hesapNo != 0) 
			printf("%-10d%-16s%-11s%102.f\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);
	}	
	
}
