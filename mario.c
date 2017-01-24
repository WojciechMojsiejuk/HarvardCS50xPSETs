#include <stdio.h>
#include <cs50.h>

void space();   //te dwie funkcje drukują tylko znaki " " i "#"
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
    
    int h2 = 2;    // tu wcześniej było h2 = h XD   jest h2 = 2, bo ilość hashów na szczycie jest stała, później tylko rośnie odwrotnie od h
    
    for(int i = h - 1; i >= 0; i--)   //tutaj h - 1 bo zauważyłem, że tyle razy i musi spaść, żeby był blok samych hashów i wysokość była równa
    {
        space(i);
        hash(h2);
        h2 = h2 + 1;     //dla równego prawego boku
        //hash(h2 - 2);   wcześniej h2 to było h, tylko wykorzystane w innym kierunku
        //h2 = h2 + 1;    to był dziwny pomysł dx
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
