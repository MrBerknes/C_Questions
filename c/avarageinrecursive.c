/*#include <stdio.h>
float avarage(int dizi[], int n, int sum = 0, int x = 0) {
    if (x == n) {
        return (float) sum / x;
    } else {
        return avarage(dizi, n, toplam + dizi[x], x + 1);
    }
}
int main() {
    int dizi[] = {1, 2, 3, 4, 5};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int ortalama_hesapla_y2(dizi, n);
    printf("avarage: %.2f\n", avarage);
    return 0;
}
