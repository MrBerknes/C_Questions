#include <stdio.h>

int main() {
    FILE *dosya;
    int karakter;
    FILE *q=fopen("ornek.txt","w");
    fputs(q);

    dosya = fopen("ornek.txt", "r");

    if (dosya == NULL) {
        printf("Dosya açılamadı.\n");
        return 1;
    }

    while ((karakter = fgetc(dosya)) != EOF) {
        printf("%c", karakter); // Okunan karakteri ekrana yazdır
    }

    fclose(dosya);

    return 0;
}
