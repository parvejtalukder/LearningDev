#include <stdio.h>
int main() {
    int nu[5];
    int i = 0, j = 0;
    int pos = 0, neg = 0, even = 0, odd = 0;
    for (i; i < 5; i++) {
        scanf("%d", &nu[i]);
        }
    for (j = 0; j < 5; j++) {
        if (nu[j] % 2 == 0) {
            even = even + 1;
            }
        if (nu[j] % 2 != 0) {
            odd = odd + 1;
            }
        if (nu[j] > 0) {
            pos = pos + 1;
            }
        if (nu[j] < 0) {
            neg = neg + 1;
            }
        }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
