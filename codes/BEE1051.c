#include <stdio.h>

int main()
{
    float income, tax;
    float temp, tax_a, tax_b, tax_c;

    scanf("%f", &income);

    if (income <= 2000.00) {
        printf("Isento\n");
    }
    else if (income <= 3000.00) {
        temp = income - 2000.00;
        tax = temp * 0.08;
        printf("R$ %.2lf\n", tax);
    }
    else if (income <= 4500.00) {
        tax_a = 1000.00 * 0.08;
        tax_b = (income - 3000.00) * 0.18;
        tax = tax_a + tax_b;
        printf("R$ %.2lf\n", tax);
    }
    else {
        tax_a = 1000.00 * 0.08;
        tax_b = 1500 * 0.18;
        tax_c = (income - 4500.00) * 0.28;
        tax = tax_a + tax_b + tax_c;
        printf("R$ %.2lf\n", tax);
    }
    return 0;
}
