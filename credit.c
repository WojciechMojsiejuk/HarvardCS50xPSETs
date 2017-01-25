#include <stdio.h>
#include <cs50.h>
#include <math.h>

int check_comp();

int main(void)
{
    printf("Number: ");
    long long num = get_long_long();
    int countd = 0; //countd=digit count
    while(num != 0) //pętla liczy cyfry
    {
        num /= 10;
        countd++;
    }
    printf("number of digits %i\n", countd); //sprawdzenie,czy dobrze policzyło
    check_comp(num, countd);  //cała reszta nie działa, nie kompiluje
    return 0;                 //ta funkcja ma sprawdzać, do jakiej firmy należy karta
}                             //po ilości liczb i początkowych dwóch cyfrach



int check_comp(n, c)
{
    if(c == 15 && n / round(pow(10, 14)) == 34 || n / round(pow(10, 14)) == 37)
    {
        printf("lol dziala");
    }
    else
    {
        printf("jednak nie");
    }
}
