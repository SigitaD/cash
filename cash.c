#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int cents;

//papraso vartotojo skaiciaus, kuris butu teigiamas
    do
    {
        change = get_float("What's the change owned?\n");
    }
    while (change < 0);

//skaiciu pavercia centais, kuriuos suapvalina
    cents = round(change * 100);

// cia skaiciuojamas sekmingu ciklu skaicius (monetu kiekis)
    int coins = 0;

//atimami 25 ct tol, kol tai galima daryti, t. y. kol atimties rezultatas yra daugiau nei 0.
    while (cents - 25 >= 0)
    {
        cents = cents - 25;
        coins++;
    }

//atimami 10 ct tol, kol tai galima daryti, t. y. kol atimties rezultatas yra daugiau nei 0
    while (cents - 10 >= 0)
    {
        cents = cents - 10;
        coins++;
    }

//atimami 5 ct tol, kol tai galima daryti, t. y. kol atimties rezultatas yra daugiau nei 0
    while (cents - 5 >= 0)
    {
        cents = cents - 5;
        coins++;
    }

//atimamas 1 ct tol, kol tai galima daryti, t. y. kol atimties rezultatas yra daugiau nei 0
    while (cents - 1 >= 0)
    {
        cents = cents - 1;
        coins++;
    }

//atvaizduojamas sekmingu ciklu (t. y. monetu) skaicius
    printf("%i\n", coins);

}