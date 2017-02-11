#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    int k = atoi(argv[1]); //k to klucz, o który program przenosi wartość ascii
    char c; //c to pojedynycza litera w ptext
    
    printf("plaintext:  ");
    string ptext = get_string(); //plaintext
    printf("ciphertext: ");
//sprawdza, czy jest z przedziału dużych lub małych liter, jeśli tak to sprawdza jaka jest szyfrowana wartość znaku, po czym ją printuje
    for(int i = 0, n = strlen(ptext); i < n; i++)
    {
        if((atoi(&ptext[i]) >= 97) && (atoi(&ptext[i]) <= 122))
        {
            c = (ptext[i] - 97 + k) % 26 + 97;
            printf("%c", c);
        }
        else if((atoi(&ptext[i]) >= 65) && (atoi(&ptext[i]) <= 90))
        {
            c = (ptext[i] - 65 + k) % 26 + 65;
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
