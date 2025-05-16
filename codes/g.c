#include <stdio.h>
int main()
{
    long long int n, i, sum;
    sum = 0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("%lld\n", sum);  
    return 0;
}
/* Second Solution 
#include <stdio.h>
int main()
{
    long long int n, sum;
    scanf("%lld", &n);
    sum = (n * (n + 1)) / 2;
    printf("%lld\n", sum);
    return 0;
}
*/