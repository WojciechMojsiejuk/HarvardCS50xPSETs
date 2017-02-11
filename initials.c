#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//program ma przyjąć słowa oddzielone spacjami, zwracając tylko inicjały wielkimi literami)

int main(void)
{
    string name = get_string();
    int n = strlen(name);
    if (name != NULL)
        {
        //ten warunek sprawdza inicjaly gdy slowo zaczyna sie bez spacji
            if (tolower(name[0])>=97&&tolower(name[0])<=122)
                {
                    char initials = toupper(name[0]);
                    printf("%c", initials);
                }
            for(int i = 0; i < n; i++) //iteracja przez znaki 
            {
                //ten warunek sprawdza wszystkie pozostale przypadki
                if (tolower(name[i-1])==32&&tolower(name[i])>=97&&tolower(name[i])<=122)
                {
                 char initials = toupper(name[i]);
                    printf("%c", initials);
                }
                    
            }
            printf("\n");
        }
    
}   
