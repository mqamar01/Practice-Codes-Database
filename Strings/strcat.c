#include <stdio.h>
void str_cat(char *x, char *y)
{
    while (*x != '\0')
    {
        x++;
    }
    while (*y != '\0')
    {
        *x = *y;
        x++;
        y++;
    }
    x++;
    *x = '\0';
}
int main()
{
    char source[] = "World!";
    char target[30] = "Hello";
    char *p1 = target;
    char *p2 = source;
    str_cat(p1,p2);
    printf("%s",target);
}