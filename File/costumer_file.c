#include <stdio.h>
int main(){	
	int hesapNo;
	char adi[30];
	double bakiye;	
	FILE *mfPtr;	
	if((mfPtr = fopen("musteri.dat","w")) == NULL)		
        printf("Dosya Acilamadi");
	else{
			printf("Hesap No, Adi ve Bakiyeyi Giriniz : ");
		printf("Veri girisini bitirmek icin EOF gir");
		printf("Degerleriniz : ");
		scanf("%d%s%lf",&hesapNo,adi,&bakiye);
		
		while(!feof(stdin)){
				fprintf(mfPtr,"%d %s %.2f \n",hesapNo,adi,bakiye);
				
				printf("Hesap No, Adi ve Bakiyeyi Giriniz : ");
				scanf("%d%s%lf",&hesapNo,adi,&bakiye);
		}		
	}	
    fclose(mfPtr); 
    FILE *q;	
    if((q=fopen("musteri.dat","r"))==NULL){
        //
    }
    else{
        while(fscanf(q, "%d %s %lf\n", &hesapNo, adi, &bakiye) == 3){
            fseek(q,1,SEEK_SET);
            //fscanf(q,"%d %s %lf\n",&hesapNo,adi,&bakiye);
            printf("%d %s %lf\n",hesapNo,adi,bakiye);
        }

    }
    
    fclose(q);
	return 0;
}
