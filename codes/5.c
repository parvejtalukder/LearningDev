#include <stdio.h>
int main()
{
    float rate = 8.5 / 100;
    float initial_deposit, number_of_years, amount, total;
    printf("Enter the Initial Deposit: ");
    scanf("%f", &initial_deposit);
    printf("Enter the number of years: ");
    scanf("%f", &number_of_years);
    amount = initial_deposit * rate * number_of_years;
    total = initial_deposit + amount;
    printf("\nThe Total Amount (after %.0f years) = TK %.2f", number_of_years, total);
    return 0;
}
