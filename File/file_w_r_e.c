#include <stdio.h>
#include <stdlib.h>

#define MAX_OGRENCI 100

struct Ogrenci {
    int numara;
    char ad[50];
    int not;
};

int main() {
    FILE *dosya, *yeniDosya;
    struct Ogrenci ogrenciler[MAX_OGRENCI];
    int ogrenciSayisi = 0;

    // Dosyayı açma (okuma modu)
    dosya = fopen("not.data", "r");
    if (dosya == NULL) {
        perror("Dosya acilamadi");
        return 1;
    }

    // Dosyadan öğrenci bilgilerini okuma
    while (fscanf(dosya, "%d %s %d", &ogrenciler[ogrenciSayisi].numara, ogrenciler[ogrenciSayisi].ad, &ogrenciler[ogrenciSayisi].not) == 3) {
        ogrenciSayisi++;
        if (ogrenciSayisi >= MAX_OGRENCI) {
            printf("Maksimum ogrenci sayisina ulasildi!\n");
            break;
        }
    }
    fclose(dosya); // Dosyayı kapatma

    // Notları güncelleme
    for (int i = 0; i < ogrenciSayisi; i++) {
        if (ogrenciler[i].not >= 70 && ogrenciler[i].not<=90) {
            ogrenciler[i].not += 10;
        } else {
            ogrenciler[i].not += 5;
        }
    }

    // Yeni dosyayı açma (yazma modu)
    yeniDosya = fopen("yeni_notlar.txt", "w");
    if (yeniDosya == NULL) {
        perror("Yeni dosya olusturulamadi");
        return 1;
    }

    // Güncellenmiş notları yeni dosyaya yazma
    for (int i = 0; i < ogrenciSayisi; i++) {
        fprintf(yeniDosya, "%d %s %d\n", ogrenciler[i].numara, ogrenciler[i].ad, ogrenciler[i].not);
    }
    fclose(yeniDosya); // Yeni dosyayı kapatma

    printf("Notlar guncellendi ve yeni dosyaya yazildi.\n");
    return 0;
}
