#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    int n = strlen(s);
    char initials[30];// tablica na inicjały
    
    for(int i = 0; i < n; i++)
    {
        
        if(s[i] != 32) //wykrycie litery
        {
            
            const char c = toupper(s[i]);// c to podwyższona litera
            strcat(initials, &c);//         dopisana do initials
            
            while((s[i+1] != 32) && (s[i+1] != '\0'))// szukanie następnej nie-litery
            {
                
                i++;
                
            }
            
        }
        
    }
    
    printf("%s\n", initials);
    return 0;
}
