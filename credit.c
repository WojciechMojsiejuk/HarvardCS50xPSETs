#include <stdio.h>//
#include <cs50.h> //
#include <math.h> //

long long check_comp();
long long check_algo();

int main(void)
{
    printf("Number: ");
    long long num_loop = get_long_long();
    int flag = 1;//ta flaga nie zmienia się przez funkcję ;-;
    long long num_card = num_loop;//kopia, num_loop zmienia wartość po pętli,
    //num_card to główna zmienna z numerem karty
    
    long long countd = 0;
    while(num_loop != 0)
    {
        num_loop /= 10;
        countd++;
    }
    
    //printf("number of digits %lli\n", countd);
    
    check_algo(num_card, &flag);
    
    if(flag == 0)//ten if powinien zamknąć program, jak algorytm się nie zgadza ;-;
    {
        //printf("flag0");
        return 0;
    }
    else
    {
        //printf("flag1");
        check_comp(num_card, countd);
    }
    //printf("%lli\n", num_card);
    return 0;
}



long long check_comp(long long n,long long c)//num_card, countd
{   
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


long long check_algo(long long n, int *flag)//n = num_card
{
    long long sum = 0, rem;//sum = suma co drugiej cyfry, rem = reszta (czyli kolejna cyfra)
    while(n != 0)
    {
        sum += n % 10;//dodanie kolejnej od końca cyfry, której nie trzeba mnożyć
        rem = n / 10 % 10;//rem, czyli każda druga cyfra od końca
        if(rem*2 / 10 >= 1)//sprawdzenie, czy dwukrotność jest dwucyfrowa
        {
            sum = sum + floor(rem*2 / 10);//dodanie pierwszej cyfry
            sum = sum + rem*2 % 10;//dodanie drugiej cyfry
        }
        else
        {
            sum = sum + rem*2;//jeśli dwukrotność jednocyfrowa, zwykłe dodanie
        }
        n = n / 100;//przejście do kolejnej drugiej cyfry
    }
    //printf("suma co drugich cyfr pomnożonych przez 2: %lli\n", sum);
    if(sum % 10 != 0)//ten cały if ma oczywiście manipulować flagą dx
    {
        printf("INVALID\n");
        (*flag) = 0;
        return *flag;
    }
    else
    {
        (*flag) = 1;
        return *flag;
    }
}
