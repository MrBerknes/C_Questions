#include <stdio.h>

int main() {
  float F;
  int C;
  printf("please enter temputure which has been celcius\n");
  scanf("%d",&C);
  F = C*9/5+32;
  printf("%f temputer at fahrenheit",F);

    return 0;
}
