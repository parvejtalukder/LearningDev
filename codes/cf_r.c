#include <stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    // Sorting from min to max
    long long int min, mid, max;

    if (a <= b && a <= c) {
        min = a;
        if (b <= c) {
            mid = b;
            max = c;
        } else {
            mid = c;
            max = b;
        }
    } else if (b <= a && b <= c) {
        min = b;
        if (a <= c) {
            mid = a;
            max = c;
        } else {
            mid = c;
            max = a;
        }
    } else {
        min = c;
        if (a <= b) {
            mid = a;
            max = b;
        } else {
            mid = b;
            max = a;
        }
    }

    printf("Sorted (min to max): %lld %lld %lld\n", min, mid, max);
    printf("Sorted (max to min): %lld %lld %lld\n", max, mid, min);

    return 0;
}