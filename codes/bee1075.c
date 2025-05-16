#include <stdio.h>

int main() {
    long long int x, i;
    scanf("%lld", &x);

    for (i = 1; i <= 1000; i++) {
        if (i % x == 0) {
            printf("%lld\n", i);
        }
    }

    return 0;
}
