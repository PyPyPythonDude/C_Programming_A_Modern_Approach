//In this program, the user will enter a 10-digit telephone number in a certain format.
//The output will display the telephone number in a slightly different format.

#include <stdio.h>

int main(void)
{
    //break the phone number up into its structural parts
    int area_code, central_office_code, station_number;

    //ask the user for input in a specific format
    printf("Enter phone number (xxx) xxx-xxxx: ");
    //store the input in the three variables
    scanf("(%d) %d-%d", &area_code, &central_office_code, &station_number);

    //print the formatted output
    printf("You entered: %d.%d.%d", area_code, central_office_code, station_number);

    return 0;
}