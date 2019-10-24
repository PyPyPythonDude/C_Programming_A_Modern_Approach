//This program will take the numbers from 1-16 from the user, in any order.
//It will then display the numbers in a 4 by 4 arrangement. Then it will
//display the sums of the rows, columns, and diagonals.

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16, row1, row2, row3, row4, col1, col2, col3, col4, diagonal1, diagonal2;

    printf("Enter the numbers 1 to 16, in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7,
          &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    printf("%d %d %d %d\n", num1, num2, num3, num4);
    printf("%d %d %d %d\n", num5, num6, num7, num8);
    printf("%d %d %d %d\n", num9, num10, num11, num12);
    printf("%d %d %d %d\n", num13, num14, num15, num16);

    row1 = num1 + num2 + num3 + num4;
    row2 = num5 + num6 + num7 + num8;
    row3 = num9 + num10 + num11 + num12;
    row4 = num13 + num14 + num15 + num16;
    col1 = num1 + num5 + num9 + num13;
    col2 = num2 + num6 + num10 + num14;
    col3 = num3 + num7 + num11 + num15;
    col4 = num4 + num8 + num12 + num16;
    diagonal1 = num1 + num6 + num11 + num16;
    diagonal2 = num4 + num7 + num10 + num13;

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

    return 0;
}