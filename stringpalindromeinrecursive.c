#include <stdio.h>

int pal(char str[], int s, int e) {
    if (s >= e) {
        return 1;
    } else if (str[s] != str[e]) {
        return 0;
    } else {
        return pal(str, s + 1, e - 1);
    }
}

int main() {
    char str[100];
    int uzunluk;

    printf("Bir string giriniz: ");
    gets(str);

    uzunluk = strlen(str);
    if (pal(str, 0, uzunluk - 1)) {
        printf("String palindrome'dur.\n");
    } else {
        printf("String palindrome değildir.\n");
    }

    return 0;
}
