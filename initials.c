#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//program ma przyjąć słowa oddzielone spacjami, zwracając tylko inicjały wielkimi literami)
int main(void)
{
    string s = get_string();
    string initials = ""; //to mają być na koniec inicjały
    char lit; //aktualnie przechwycona litera
    // w tej chwili program zbiera wszystkie litery, później to zmienię
    if(s != NULL)
    {
        for(int i = 0, n = strlen(s); i < n; i++) //iteracja przez znaki w s
        {
            if(s[i] != ' ') //wykrycie litery
            {
                lit = toupper(s[i]); //podwyższenie litery, potem dodanie do initials
                strcat(initials, &lit);
            }
        }
    }
    printf("%s\n", initials);
}
