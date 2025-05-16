#include <stdio.h>

int main() {
    int time_lim = 24;
    int start, end;
    scanf("%d %d", &start, &end);

    int pros;
    if (start > end) {
        pros = (time_lim - start) + end;
    } else if (end > start) {
        pros = end - start;
    } else {
        pros = time_lim;
    }

    printf("O JOGO DUROU %d HORA(S)", pros);

    return 0;
}
