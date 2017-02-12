#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./crack <password>");
        return 1;
    }
    //hash-pobiera tekst z terminala
    string hash = argv[1];
    
    //thash-string testowy do porownywania z hashem
    string thash, thash2;
   
    //rofl = 50fkUxYHbnXGw   
    //a-50Dtm00K6zwZg   ???
    //A-50OzIExR0.TSw
    char salt[3] = {hash[0], hash[1], '\0'};
    for(char i = 'a'; i <= 'c'; i++)
    {
        thash = crypt(&i, salt);
        printf("%s\n",thash);
        printf("%s\n",hash);
        printf("%c\n",i);

        if(strcmp(hash, thash) == 0)
        {
            printf("dziala\n");
            return 0;
        }

    }  
    for(char j = 'A'; j <= 'C'; j++)
    {
        thash2 = crypt(&j,salt);
        printf("%s\n",thash2);
        printf("%s\n",hash);
        printf("%c\n",j);

        if(strcmp(hash, thash2) == 0)
        {
            printf("DZIALA\n");
            return 0;
        }
    }  


}
