#include <stdio.h>

int main(void)
{
    int x, final_result;
    printf("Enter an amount for x: ");
    scanf("%d", &x);

    final_result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("The final result is: %d\n", final_result);
}