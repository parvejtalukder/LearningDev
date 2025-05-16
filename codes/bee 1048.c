#include <stdio.h>
int main() {
    float salery, increase, earned, percentage;
    scanf("%f", &salery);
    if (salery >= 0 && salery <= 400.00 ) {
        earned = salery * 0.15;
        increase = salery + earned;
        percentage = 15;
        printf("Novo salario: %.2f\n", increase);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %.0f %\n", percentage);
        } else if (salery >= 400.01 && salery <= 800.00) {
        earned = salery * 0.12;
        increase = salery + earned;
        percentage = 12;
        printf("Novo salario: %.2f\n", increase);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %.0f %\n", percentage);
        } else if (salery >= 800.01 && salery <= 1200.00) {
        earned = salery * 0.10;
        increase = salery + earned;
        percentage = 10;
        printf("Novo salario: %.2f\n", increase);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %.0f %\n", percentage);
        } else if (salery >= 1200.01 && salery <= 2000.00) {
        earned = salery * 0.07;
        increase = salery + earned;
        percentage = 7;
        printf("Novo salario: %.2f\n", increase);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %.0f %\n", percentage);
        } else if (salery >= 2000.00) {
        earned = salery * 0.04;
        increase = salery + earned;
        percentage = 4;
        printf("Novo salario: %.2f\n", increase);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %.0f %\n", percentage);
        }
    return 0;
}
