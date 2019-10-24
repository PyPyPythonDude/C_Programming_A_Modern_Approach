//Section 3.1, Question 2

#include <stdio.h>

int main(void)
{
    //some printf functions to display the value of x, a floating point number,
    //in different formats
    float x;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f", x);

    return 0;
}