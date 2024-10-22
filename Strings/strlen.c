#include <stdio.h>
//#include <strings.h>
void findlen(char *p)
{
    int count = 0;
    while(*p != NULL)
    {
        count++;
        p++;
    }
    printf("Count is: %d",count);
}
int main()
{
    char name[20] = "Murtaza Qamar";
    //printf("Enter your name: ");
    //scanf("%s",&name);
    char *ptr = name;
    findlen(ptr);
}