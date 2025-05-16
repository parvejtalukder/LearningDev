#include <stdio.h>

int main() {
    long long int x, i;
    scanf("%lld", &x);

    for (i = 1; i <= 10; i++) {
            printf("%lld x %lld = %lld\n", i, x, x * i);
    }
    return 0;
}
