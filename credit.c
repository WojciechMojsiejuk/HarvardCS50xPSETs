#include <stdio.h>//program rozpoznaje karte, musi teraz tylko sprawdzic,
#include <cs50.h> //czy jest poprawna wzgledem algorytmu
#include <math.h> //+ usuniete niepotrzebne testu

long long check_comp();

int main(void)
{
    printf("Number: ");
    long long num_loop = get_long_long();
    long long num_card = num_loop;//kopia, num_loop zmienia wartość po pętli,
    //num_card to główna zmienna z numerem karty
    
    long long countd = 0;
    while(num_loop != 0)
    {
        num_loop /= 10;
        countd++;
    }
    printf("number of digits %lli\n", countd);
    
    check_comp(num_card, countd);
    return 0;
}



long long check_comp(long long n,long long c)//num_card, countd
{   
    printf("zmienne: %lli, %lli \n", n, c);
    if(((c == 15) && (floor(n / pow(10, 13))) == 34) || (floor(n / pow(10, 13)) == 37))
    {
        printf("AMEX\n");
    }
    else if(((c == 16) && (floor(n / pow(10, 14))) == 51) || (floor(n / pow(10, 14)) == 52) || (floor(n / pow(10, 14)) == 53) || (floor(n / pow(10, 14)) == 54) || (floor(n / pow(10, 14)) == 55))
    {
        printf("MASTERCARD\n");
    }
    else if((((c == 13) && (floor(n / pow(10, 12))) == 4)) || ((c == 16) && (floor(n / pow(10, 15)) == 4)))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
