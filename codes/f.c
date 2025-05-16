#include <stdio.h>
int main()
{
    long long int n, m;
    int digit_n, digit_m;
    scanf("%lld %lld", &n, &m);
    digit_n = n % 10;
    digit_m = m % 10;
    int sum = digit_n + digit_m;
    printf("%d\n", sum);
    return 0;
}