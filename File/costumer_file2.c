#include <stdio.h>
int main(){	
	int hesapNo;
	char adi[30];
	double bakiye;		
	FILE *mfPtr;
	if((mfPtr = fopen("musteri.dat","r")) == NULL)
		printf("Dosya Acilamadi");
	else{
		printf("%-10s%-13s%s\n","HesapNo","Adi","Bakiye");	
		fscanf(mfPtr,"%d%s%lf",&hesapNo,adi,&bakiye);	
		while(!feof(mfPtr)){
			printf("%-10d%-13s%7.2f\n",hesapNo,adi,bakiye);
			fscanf(mfPtr,"%d%s%lf",&hesapNo,adi,&bakiye);
		}
		fclose(mfPtr);	
	}
	return -1;
}
