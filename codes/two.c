#include <stdio.h>
int main() {
    long long int t;
    long long int i;
    scanf("%lld", &t);
    long long int x[t];
    for (i = 0; i < t; i++) {
        scanf("%lld", &x[i]);
    }
    for (long long int j = 0; j < t; j++) {
        if (x[j] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
