#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Merhaba, dünya!";
  int i, count = 0;
  int ilk_bulunan_indis = -1;

  for (i = 0; i < strlen(str); i++) {
    if (str[i] == 'a') {
      count++;
      if (ilk_bulunan_indis == -1) {
        ilk_bulunan_indis = i;
      }
    }
  }

  if (count > 0) {
    printf("'%s' stringinde '%c' harfi %d kere geçiyor.\n", str, 'a', count);
    printf("'%c' harfi ilk olarak %d. indiste bulunuyor.\n", 'a', ilk_bulunan_indis);
  } else {
    printf("'%s' stringinde '%c' harfi bulunmuyor.\n", str, 'a');
  }

  return 0;
}
