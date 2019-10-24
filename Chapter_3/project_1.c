//a simple program for accepting a date from the user, and displaying it in a different format
//than was entered

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    //making sure to format the output so that leading zeros are displayed, if applicable
    printf("You entered the date %.4d%.2d%.2d.", year, month, day);

    return 0;
}