#include <stdio.h>
int main()
{
    float amount_of_apple, amount_of_orange, amount_of_grapes;
    float price_of_apple, price_of_orange, price_of_grapes, total;

    float apple_per_kg = 140;
    float orange_per_kg = 90;
    float grapes_per_kg = 360;

    printf("Enter the amount of Apple (in Kg): ");
    scanf("%f", &amount_of_apple);
    printf("Enter the amount of Orange (in Kg): ");
    scanf("%f", &amount_of_orange);
    printf("Enter the amount of Grapes (in Kg): ");
    scanf("%f", &amount_of_grapes);

    price_of_apple = apple_per_kg * amount_of_apple;
    price_of_orange = orange_per_kg * amount_of_orange;
    price_of_grapes = grapes_per_kg * amount_of_grapes;
    total = price_of_apple + price_of_orange + price_of_grapes;

    printf("\n\nThe Price of Apple = TK %.2f\n", price_of_apple);
    printf("The Price of Orange = TK %.2f\n", price_of_orange);
    printf("The Price of Grapes = TK %.2f\n", price_of_grapes);
    printf("The Total Price = TK %.2f", total);

    return 0;
}
