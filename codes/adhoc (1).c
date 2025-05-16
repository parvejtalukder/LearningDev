#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, b;
    long long int x;
    long long int sum = 0;
    long long int i = 0;
    scanf("%lld %lld %lld", &a, &b, &x);

    for (a; a <= b; a++) {
        if (a % x == 0) {
            sum = sum + 1;
        }
    }

    printf("%lld", sum);
    return 0;
}

