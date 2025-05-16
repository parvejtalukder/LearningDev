#include <stdio.h>
#include <math.h>

int main()
{
    long long int x;
    long long int mul = 0;
    long long int i = 0;
    long long int sum  = 0;
    scanf("%lld", &x);
    for (i; i < x; i++) {
        mul = mul * i;
    }
    long long int count = 0;
    if (mul % 10) {
     if (mul == 0) {
        sum = sum + 1;
     }
    }
    printf("%lld", sum);
    return 0;
}
