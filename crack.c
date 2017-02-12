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
    string thash;
    
    //rofl = 50fkUxYHbnXGw   
    //a-50Dtm00K6zwZg   ???
    char salt[3] = {hash[0], hash[1], '\0'};
    for(char i = 'a'; i <= 'c'; i++)
    {
        thash = crypt(&i, salt);
        printf("%s\n",thash);
        printf("%s\n",hash);
        if(strcmp(hash, thash) == 0)
        {
            printf("dziala\n");
            return 0;
        }
        
    }  

}
