#include <stdio.h>

int main() {
  int heightweight[10][2];
  for (int i = 0; i < 10; i++) {
    printf("%d. enter height: ", i + 1);
    scanf("%d", &heightweight[i][0]);
    printf("%d. enter weight: ", i + 1);
    scanf("%d", &heightweight[i][1]);
  }
  int  totalHeight= 0;
  for (int i = 0; i < 10; i++) {
    totalHeight += heightweight[i][0];
  }
  float avarageHeight = (float)totalHeight / 10;
  int totalWeight = 0;
  for (int i = 0; i < 10; i++) {
    totalWeight += heightweight[i][1];
  }
  float avarageWeight = (float)totalWeight / 10;
  printf("avarage height: %.2f\n", avarageHeight);
  printf("avarage weight: %.2f\n", avarageWeight);
  return 0;
}