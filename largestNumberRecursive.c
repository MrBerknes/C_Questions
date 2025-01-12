int largestnumber(int dizi[], int boyut) {
  if (boyut == 1) {
    return dizi[0];
  } else {
    int max = largestnumber(dizi, boyut - 1);
    if (dizi[boyut - 1] > max) {
      return dizi[boyut - 1];
    } else {
      return max;
    }
  }
}

int main() {
  int dizi[] = {10, 2, 5, 7, 15, 4};
  int boyut = sizeof(dizi) / sizeof(int);

  int enBuyuk = largestnumber(dizi, boyut);
  printf("Dizideki en büyük eleman: %d\n", enBuyuk);

  return 0;
}
