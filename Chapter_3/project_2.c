// This program formats product information entered by the user.

#include <stdio.h>

int main(void)
{
    int item_num, month, day, year;
    float price;

    //get the item number from the user
    printf("Enter item number: ");
    scanf("%d", &item_num);

    //get the unit price from the user
    printf("Enter unit price: ");
    scanf("%f", &price);

    //get the purchase date from the user
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    //format the output
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%6.2f\t\t%-.2d/%-.2d/%-.4d", item_num, price, month, day, year);

    return 0;
}