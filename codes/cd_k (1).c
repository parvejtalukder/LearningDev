#include <stdio.h>
int main()
{
    long long int ans;
    long long int num[3];
    for (int i = 0; i < 3; i++) {
        scanf("%lld", &num[i]);
        }
    if (num[0] > num[1] && num[0] > num[2]) {
        printf("%lld", &num[0]);
        } else if (num[1] > num[0] && num[1] > num[2]) {
        printf("%lld", &num[0]);
        } else if (num[2] > num[1] && num[2] > num[0]) {
        printf("%lld", &num[0]);
        }
    if (num[0] < num[1] && num[0] < num[2]) {
        printf("%lld", &num[0]);
        } else if (num[1] < num[0] && num[1] < num[2]) {
        printf("%lld", &num[0]);
        } else if (num[2] < num[1] && num[2] < num[0]) {
        printf("%lld", &num[0]);
        }
    return 0;
}
