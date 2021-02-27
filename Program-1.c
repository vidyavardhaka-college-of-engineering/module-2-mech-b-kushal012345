//Program to find number of digits in the input
//INPUT - 452
//OUTPUT -3

#include <stdio.h>

int main()
{
   int num;
    int count = 0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Run loop till num is greater than 0 */
    do
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    } while(  != 0);

    printf("Total digits: %d", );

    return 0;
}
