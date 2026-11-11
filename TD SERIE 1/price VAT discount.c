#include <stdio.h>

int main() {
    float total, amount;
    const float VAT = 1.2;

    printf("Enter the total of your purchase: ");
    scanf("%f", &total);
    printf("\n");

    printf("Your total is: %.2f\n", total);

    total *= VAT;

    printf("After VAT = 20%%\nThe price is: %.2f\n", total);

    if (total >= 2000) {
        amount = total * 0.85;
        printf("Your total after discount is: %.2f\n", amount);
    } else {
        amount = total;
    }

    return 0;
}