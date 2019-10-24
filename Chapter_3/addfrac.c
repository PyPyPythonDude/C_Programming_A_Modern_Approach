// a simple program to add two fractions

#include <stdio.h>

int main(void)
{
    //declare the variables with type int
    int num1, denom1, num2, denom2, result_num, result_denom;
    //ask user for input
    printf("Enter first fraction: ");
    //store the input
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    // add the fractions and store the results in 2 variables of type int
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    //display the results to the user
    //the resulting fraction is not reduced to lowest terms
    printf("The result is %d/%d\n", result_num, result_denom);
}