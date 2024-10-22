#include <stdio.h>

void strrev(char * buffer)
{
    char *temp = buffer; //points to M now
    char *dump = temp;
    while (*dump != NULL)
    {
        dump++;
    }
    while (dump>temp)
    {
        char c = *temp;
        *temp = *dump;
        *dump = c;
        temp++;
        dump--;
    }
}

int main()
{
    char name[15] = "Murtaza Qamar";
    strrev(name);
    printf("%s",name);
}