#include <stdio.h>
int main() {
    char ch;
    char str[100];
    char string[100];
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", &str);
    printf("%s\n", str);
    getchar();
    scanf("%[^\n]", string);
    printf("%s\n", string);
    return 0;
}