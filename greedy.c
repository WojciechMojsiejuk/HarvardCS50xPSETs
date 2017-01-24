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
    //printf("%i\n", change);   //remove when done
    
    while(change >= 0)
    {
        if(change - 25 >= 0)
        {
            change -= 25;
            coins += 1;
            continue;
        }
        else if(change - 10 >= 0)
        {
            change -= 10;
            coins += 1;
            continue;
        }
        else if(change - 5 >= 0)
        {
            change -= 5;
            coins += 1;
            continue;
        }
        else if (change - 1 >= 0)
        {
            change -= 1;
            coins += 1;
            continue;
        }
        else
        {
            printf("%i\n", coins);
            break;
        }
    }
}
