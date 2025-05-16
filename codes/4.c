#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, n5, total, average;
    printf("Enter the number 1: ");
    scanf("%f", &n1);
    printf("Enter the number 2: ");
    scanf("%f", &n2);
    printf("Enter the number 3: ");
    scanf("%f", &n3);
    printf("Enter the number 4: ");
    scanf("%f", &n4);
    printf("Enter the number 5: ");
    scanf("%f", &n5);

    total = n1 + n2 + n3 + n4 + n5;
    average = total / 5.0;

    printf("\n\nTotal = %.2f\n", total);
    printf("Average = %.2f\n", average);
    return 0;
}
