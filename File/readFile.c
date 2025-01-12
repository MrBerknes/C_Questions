#include <stdio.h>

int main() {
    FILE *dosya = fopen("veri.txt", "r");
    int sayi;

    fscanf(dosya, "%d", &sayi);  // Dosyadan sayıyı oku
    fclose(dosya);               // Dosyayı kapat

    printf("Okunan sayi: %d\n", sayi); // Sayıyı ekrana yazdır (hala bellekte)

    FILE *dosya2 = fopen("veri2.txt","r");
    fprintf(dosya2, "%d",sayi+5);
    printf("Okunan sayi: %d\n", sayi);
    return 0;
}