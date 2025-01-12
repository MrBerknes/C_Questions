#include <stdio.h>
struct musteri{
	int hesapNo;
	char soyad[25];
	char ad[30];
	double bakiye;
};
typedef struct musteri musteri;;
int main(){	
	int i;
	musteri bosMusteri = {0,"","",0.0};
	FILE *myPtr;
	if((myPtr = fopen("musteri.dat","w")) == NULL)
	printf("Dosya Olusturulamadi");
	else{
		for(i=1;i<=100;i++)
			fwrite(&bosMusteri,sizeof(musteri),1,myPtr);
		fclose(myPtr);
	}	
	return -1;
}
