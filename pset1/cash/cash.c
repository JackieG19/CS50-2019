#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    int coins = 0;
    int cents;
    dollars = get_float("Change owed: ");

    while (dollars < 0);

    cents = round(dollars * 100); // rounded to the nearest dollar

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    printf("Quarters: %i\n", coins);

    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    printf("Dimes: %i\n", coins);

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    printf("Nickels: %i\n", coins);

    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }
    printf("Pennies: %i\n", coins);
}
