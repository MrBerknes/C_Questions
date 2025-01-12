#include <stdio.h>

typedef struct {
  int ogrenciNo;
  char isim[50];
  float not;
} Ogrenci;

int main() {
  char dosyaAdi[20] = "ogrenciBilgileri.txt";
  FILE *dosya;
  int ogrenciSayisi;

  dosya = fopen(dosyaAdi, "w");
  if (dosya == NULL) {
    printf("Dosya alama!\n");
    exit(1);
  }

  printf("Kac ogrenci bilgisi gireceksiniz: ");
  scanf("%d", &ogrenciSayisi);

  int i = 0;
  while (i < ogrenciSayisi) {
    Ogrenci ogrenci;

    printf("%d. ogrenci numaras: ", i + 1);
    scanf("%d", &ogrenci.ogrenciNo);

    printf("sim: ");
    scanf("%s", ogrenci.isim);

    printf("Not: ");
    scanf("%f", &ogrenci.not);

    fprintf(dosya, "%d %s %.2f\n", ogrenci.ogrenciNo, ogrenci.isim, ogrenci.not);

    i++;
  }

  fclose(dosya);
  printf("Dosya yazdrma ilemi basaryla tamamland!\n");

  return 0;
}
