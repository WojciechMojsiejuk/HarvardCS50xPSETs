#include <stdio.h>
#include <cs50.h>

void space();
void hash();

int main(void)
{
    printf("Height: ");
    while(true)
    {
        int h = get_int();
        if(h >= 0 && h < 24)
        {
            break;
        }
        else
        {
            printf("Height: ");
        }
    }
}
void space(n)
{
    for(int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void hash(n)
{
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
}
