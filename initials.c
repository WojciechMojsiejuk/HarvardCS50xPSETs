#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    int n = strlen(s);
    char initials[1000] = "";// tablica na inicjały, bez zainicjonowania na pusto daje dziwne znaki na początku (??? dx)
    
    if(s != NULL)
    {
        for(int i = 0; i < n; i++)
        {
        
            if(s[i] != 32) //wykrycie litery, tylko spacje mają być ignorowane
            {
            
                const char c = toupper(s[i]);// c to podwyższona litera, const wymagana do działania strcat według kompilatora
                strcat(initials, &c);//         dopisana do initials, bez & się nie kompiluje
            
                while((s[i] != 32) && (i < n))// szukanie następnej nie-litery
                {
                
                    i++;
                
                }
            }
        
        }
    }
    printf("%s\n", initials);
    return 0;
}
