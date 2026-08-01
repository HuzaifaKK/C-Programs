#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amount;
    int base_currency_choice;

    const float PKR_TO_USD = 0.0036;
    const float PKR_TO_GBP = 0.0027;
    const float PKR_TO_JPY = 0.59;
    const float PKR_TO_PHP = 0.22;

    printf("Currency Converter\n");
    printf("------------------\n");

    printf("Select your base currency: \n");
    printf("1. PKR\n2. USD\n3. GBP\n4. JPY\n5. PHP\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &base_currency_choice);

    printf("Enter the amount: ");
    scanf("%f", &amount);
    float amount_in_pkr;

    switch (base_currency_choice)
    {
    case 1:
        amount_in_pkr = amount;
        break;
    case 2:
        amount_in_pkr = amount / PKR_TO_USD;
        break;
    case 3:
        amount_in_pkr = amount / PKR_TO_GBP;
        break;
    case 4:
        amount_in_pkr = amount / PKR_TO_JPY;
        break;
    case 5:
        amount_in_pkr = amount / PKR_TO_PHP;
        break;
    default:
        printf("Invalid base currency choice.\n");
        return 1;
    }

    printf("\nConverted Amounts:\n");
    printf("\n");

    printf("PKR: %.4f\n", amount_in_pkr);
    printf("EUR: %.4f\n", amount_in_pkr * PKR_TO_USD);
    printf("GBP: %.4f\n", amount_in_pkr * PKR_TO_GBP);
    printf("JPY: %.4f\n", amount_in_pkr * PKR_TO_JPY);
    printf("PHP: %.4f\n", amount_in_pkr * PKR_TO_PHP);

    return 0;
}