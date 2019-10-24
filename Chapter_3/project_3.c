//This program breaks down an ISBN entered by the user.
//A typical ISBN looks like this: 978-0-394-98950-4.

#include <stdio.h>

int main(void)
{
    //declare variables needed for this exercise
    int prefix, identifier, publisher_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &publisher_code, &item_num, &check_digit);

    //combine 5 printf functions into 1
    printf("GS1 Prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem Number: %d\n"
           "Check Digit: %d\n",
           prefix, identifier, publisher_code, item_num, check_digit);

    return 0;
}