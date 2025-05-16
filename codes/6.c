#include <stdio.h>
#include <math.h>
int main()
{
    float rate = 7.5 / 100;
    float p, t, n, amount, total, temp, temp2;
    printf("Enter the Initial Deposit: ");
    scanf("%f", &p);
    printf("Enter the number of years: ");
    scanf("%f", &t);
    printf("Enter the term of comp. per year: ");
    scanf("%f", &n);

    temp2 = n * t;
    temp = 1 + rate / n;
    amount = p * pow(temp, temp2);
    total = amount;

    printf("\nThe Total Amount (Comp.) = TK %.2f", t, total);
    return 0;
}
