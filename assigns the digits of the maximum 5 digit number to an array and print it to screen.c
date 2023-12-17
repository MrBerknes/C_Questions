#include<stdio.h>
int main() {
  int dizi[6],number,x;
  printf("enter a number: ");
  scanf("%d", &number);
  int counter = 0;
  while (number > 0) 
  {
    dizi[counter++] = number%10;
    number/= 10;
  }

  printf("digits of the number: ");
  for (x = counter - 1; x >= 0; x--)
  {
    printf("%d ", dizi[x]);
  }

  return 0;
}
