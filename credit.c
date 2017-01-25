#include <stdio.h>
#include <cs50.h>
#include <math.h>

long long check_comp();

int main(void)
{
    printf("Number: ");
    long long num = get_long_long();
    long long num2 = num;
    printf("\n%lli\n", num2);
    long long p = pow(10, 13);
    printf("%lli\n", p);
    long long countd = 0; //countd=digit count
    while(num != 0) //pętla liczy cyfry
    {
        num /= 10;
        countd++;
    }
    printf("number of digits %lli\n", countd); //sprawdzenie,czy dobrze policzyło
    long long a = floor(num2 / pow(10, 13)); //to samo dzialanie co w funkcji, dziala
    long long b = a - 37;
    printf("%lli, %lli\n", a, b);
    printf("\n%lli\n", num2);
    check_comp(num2, countd);  //cała reszta nie działa, nie kompiluje
    return 0;                 //ta funkcja ma sprawdzać, do jakiej firmy należy karta
}                             //po ilości liczb i początkowych dwóch cyfrach



long long check_comp(n, c)
{
    //if(((c == 15) && (floor(n / pow(10, 13))) == 34) || (floor(n / pow(10, 13)) == 37))
    printf("zmienne: %i, %i ", n, c);
    long long lol = floor(n / pow(10, 13));
    if((c == 15) && (floor(n / pow(10, 13))) - 37 == 0)
    {
        printf("lol dziala\n");
    }
    else
    {
        printf("jednak nie, %lli\n", lol);
    }
    return 0;
}
