#include <stdio.h>
int main() {
    long long int num_one, num_two, ans;
    char sign;
    scanf("%lld%c%lld", &num_one, &sign, &num_two);
    if (sign == '+') {
        ans = num_one + num_two;
    } else if (sign == '-') {
        ans = num_one - num_two;
    } else if (sign == '*') {
        ans = num_one * num_two;
    } else if (sign == '/') {
        ans = num_one / num_two;
    } else {
        printf("Error\n");
    }
    printf("%lld\n", ans);
    return 0;
}
