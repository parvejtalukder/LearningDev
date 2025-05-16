#include <stdio.h>
int main() {
    double num[6];
    int positiveCount = 0;
    scanf("%lf %lf %lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
    for (int i = 0; i < 6; i++) {
        if (num[i] > 0) {
            positiveCount = positiveCount + 1;
        }
    }
    printf("%d valores positivos\n", positiveCount);
    return 0;
}
