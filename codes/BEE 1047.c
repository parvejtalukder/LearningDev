#include <stdio.h>
int main()
{
    int start_h, start_m, end_h, end_m, temp_a, temp_b, time;
    int temp_c, temp_d, temp_e, temp_f;
    printf("Enter the starting time as HH:MM: ");
    scanf("%d %d", &start_h, &start_m);
    printf("Enter the ending time as HH:MM: ");
    scanf("%d %d", &end_h, &end_m);

    temp_a = (start_h * 60) + start_m;
    temp_b = (end_h * 60) + end_m;

    if (temp_b <= temp_a) {
        temp_b += 24 * 60;
    }

    temp_c = temp_b - temp_a;
    temp_d = temp_c / 60;
    temp_e = temp_c % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", temp_d, temp_e);

    return 0;
}
