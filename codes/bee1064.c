#include <stdio.h>
int main()
{
    double sum = 0, num[6], count = 0;
    int i, j;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &num[i]);
        if ((int)num[i] > 0) {
            count = count + 1;
            sum = sum + num[i];
            }
        }
    double avg = sum / count;
    printf("%.0lf valores positivos\n", count);
    printf("%.1lf\n", avg);
    return 0;
}
