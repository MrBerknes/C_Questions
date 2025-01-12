//Sum of the series [ 1+x+x^2/2!+x^3/3!+....]
#include <stdio.h>
int main() {
  float x,t,s,i,n;

  printf("Enter the value of x: ");
  scanf("%f", &x);

  printf("Enter the number of terms (N): ");
  scanf("%f", &n);

  s=1;
  t=1;
  i=1;
  while(i<=n)
  {
    t=t*x/i;
    s=s+t;
    i=i+1;
  }

  printf("The sum of the series is: %.4f\n", s);

  return 0;
}