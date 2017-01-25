#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int change;
    int coins = 0;
    printf("O hai! How much change is owed?\n");
    while(true)
    {
        change = round(get_float() * 100);
        if(change >= 0)
        {
            break;
        }
        else
        {
            printf("How much change is owed?\n");
        }
    }

    while(change >= 0)
    {
        coins++;
        if(change - 25 >= 0)
        {
            change -= 25;
            continue;
        }
        else if(change - 10 >= 0)
        {
            change -= 10;
            continue;
        }
        else if(change - 5 >= 0)
        {
            change -= 5;
            continue;
        }
        else if (change - 1 >= 0)
        {
            change -= 1;
            continue;
        }
        else
        {   
            coins--;
            printf("%i\n", coins);
            break;
        }
    }
}
