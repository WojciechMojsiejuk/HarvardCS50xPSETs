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
            for(int i = 0; i < n; i++) //iteracja przez znaki 
            {
                if(name[i]>=65&&name[i]<=90) //wykrycie litery
                {
                    char initials = toupper(name[i]);
                    printf("%c", initials);
                }
            }
        }
    
}  
