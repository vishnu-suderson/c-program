#include <stdio.h>
int main()
{
    int number, reversed = 0;
    // Input a number from user
    printf("Enter any number = ");
    scanf("%d", &number);
    //Repeat the till number becomes 0
    while(number != 0)
    {
        /*
         * Increase place value of reversed and
         * add last digit to reversed
         */
        reversed = (reversed * 10) + (number % 10);
        // Remove last digit from number
        number /= 10;
    }
    printf("Reverse = %d", reversed);
    return 0;
}
