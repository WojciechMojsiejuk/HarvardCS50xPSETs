#include <stdio.h>
#include <cs50.h>

void space();
void hash();

int main(void)
{
    printf("Height: ");
    int h;
    while(true)
    {
        h = get_int();
        if(h >= 0 && h < 24)
        {
            break;
        }
        else
        {
            printf("Height: ");
        }
    }
    
    int h2 = 1;
    
    for(int i = h - 1; i >= 0; i--)
    {
        space(i);
        hash(h2);
        space(2);   //ta i następna linia dodana, wcześniej zmienione tylko h2 na wartość 1 i tyle dx
        hash(h2);
        h2 = h2 + 1;
        printf("\n");
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
