#include <stdio.h>
int main(){
	int secim,hesapNo;
	char adi[30];
	double bakiye;
	FILE *mfPtr;	
	if((mfPtr = fopen("musteri.dat","r")) == NULL)
		printf("Dosya Acilamadi");
	else{
		printf("Secim Yapiniz\n"
		"1-Hesabinda para olmayan kisilerin listesi\n"
		"2-Borclu olan kisilerin listesi\n"
		"3-Hesabinda para olan kisilerin listesi\n"
		"4-Cikis\n");
		scanf("%d",&secim);	
		while(secim != 4){
			fscanf(mfPtr,"%d%s%lf",&hesapNo,adi,&bakiye);
			switch(secim){
				case 1: 
					printf("Hesabinda para olmayan kisilerin listesi  : \n");
					while(!feof(mfPtr)){ 
    						if(bakiye == 0)
							printf("%-10d%-13s%7.2f\n",hesapNo,adi,bakiye);
						
						fscanf(mfPtr,"%d%s%lf",&hesapNo,adi,&bakiye);	
					}
					break;
				case 2: 
					printf("Hesabinda para olmayan kisilerin listesi  : \n");
					while(!feof(mfPtr)){ 
						if(bakiye < 0) 
							printf("%-10d%-13s%7.2f\n",hesapNo,adi,bakiye);
					
						fscanf(mfPtr,"%d%s%lf",&hesapNo,adi,&bakiye);
					}
					break;
				case 3: 
					printf("Hesabinda para olmayan kisilerin listesi  : \n");
					while(!feof(mfPtr)){ 
						if(bakiye > 0) 
							printf("%-10d%-13s%7.2f\n",hesapNo,adi,bakiye);

						fscanf(mfPtr,"%d%s%lf",&hesapNo,adi,&bakiye);
						
					}
					break;
			}
			
			rewind(mfPtr);
			printf("Secimin : ");
			scanf("%d",&secim);
		}
		fclose(mfPtr);
	}
	return -1;
}
