#include <stdio.h>
#include <stdio.h>//jak narazie, program sprawdza ilość cyfr, i powinien sprawdzać też
#include <cs50.h> //częściowo zgodność z kartami AMEX, ale gubi typ long long przy
#include <math.h> //przeniesieniu do funkcji ;-;

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
    
    long long test = floor(num_card / pow(10, 13) - 37);//test działania, z kartą o
    printf("Wynik testu: %lli\n", test);                //numerze 378282246310005 powinien dać 0,
    //i daje 0
    check_comp(num_card, countd);
    //w przeciwieństwie do funkcji ;-;
    return 0;
}



long long check_comp(n, c)//num_card, countd
{   //to niżej to pełne sprawdzenie, bo karty AMEX mają 15 cyfr, a dwie pierwsze to 34 lub 37
    //if(((c == 15) && (floor(n / pow(10, 13))) == 34) || (floor(n / pow(10, 13)) == 37))
    printf("zmienne: %i, %i \n", n, c);//tu widać, że n i c, czyli num_card i countd
//mają typ integer, chociaż wcześniej były long long, przez co n num_card się rozwala
    if((c == 15) && (floor(n / pow(10, 13))) == 37)
    {
        printf("karta AMEX rozpoznana\n");
    }
    else
    {
        printf("karta niewlasciwa, dwie pierwsze cyfry: %f\n", floor(n / pow(10, 13)));
    }//przy else zwraca -1, niezależnie od typu finalnego, sprawdzałem
    return 0;
}
