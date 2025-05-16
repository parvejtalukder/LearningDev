#include <stdio.h>

int main()
{
    int initial_hour, initial_minute, final_hour, final_minute;

    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

    int start_time_in_minutes = initial_hour * 60 + initial_minute;
    int end_time_in_minutes = final_hour * 60 + final_minute;

    if (end_time_in_minutes < start_time_in_minutes) {
        end_time_in_minutes += 24 * 60;
    }

    int duration_in_minutes = end_time_in_minutes - start_time_in_minutes;

    int duration_hours = duration_in_minutes / 60;
    int duration_minutes = duration_in_minutes % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hours, duration_minutes);

    return 0;
}
