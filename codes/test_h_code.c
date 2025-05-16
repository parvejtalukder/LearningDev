#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    double result = (double)a / b;

    printf("floor %lld / %lld = %d\n", a, b, (int)floor(result));
    printf("ceil %lld / %lld = %d\n", a, b, (int)ceil(result));
    printf("round %lld / %lld = %d\n", a, b, (int)round(result));

    return 0;
}
