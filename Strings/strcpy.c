#include <stdio.h>
//#include <strings.h>
void copystr(char *x, char *y)
{
    while (*x != '\0')
    {
        *y = *x;
        x++;
        y++;
    }
    *y = '\0';
}
int main()
{
    char name[20] = "Testing Run";
    char target[20];
    char *ptr = name;
    char *ptr1 = target;
    //strcpy(target,name);
    copystr(ptr,ptr1);
    printf("%s\n%s",name,target);
}