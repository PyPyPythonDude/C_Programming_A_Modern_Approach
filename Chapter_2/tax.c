//add %15 tax to an amount the user enters and display the result

#include <stdio.h>

int main(void)
{
    float original_amount;

    printf("Enter an amount: ");
    scanf("%f", &original_amount);
    printf("With tax added: $%.2f\n", original_amount * 1.15f);

    return 0;
}