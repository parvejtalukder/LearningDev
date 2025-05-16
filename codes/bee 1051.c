#include <stdio.h>

int main()
{
    float income, temp, temp_a, temp_b, temp_c, tax, tax_a, tax_b, tax_c;
    scanf("%f", &income);
    if (income <= 2000.00) {
        printf("R$ %.2f", income);
    }
    else if (income >= 2000.01 && income <= 3000.00) {
        temp = income - 2000.00;
        tax = temp * 0.08;
        printf("R$ %.2f", tax);
    }
    else if (income >= 3000.01 && income <= 4500.00) {
        temp = income - 2000.00;
        tax = temp * 0.08;

    }

    return 0;
}
