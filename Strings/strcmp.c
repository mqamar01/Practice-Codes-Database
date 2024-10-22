#include <stdio.h>
int str_cmp(char *x, char *y)
{
    while (*x == *y && *x != NULL && *y != NULL)
    {
        x++;
        y++;
    }
    if (*x == NULL && *y == NULL)
    {
        return 0;
    }
    else
    {
        return (*x-*y);
    }
}
int main()
{
    char name[] = "Murtaza";
    char name1[] = "\0urtaza";
    char *p1 = name;
    char *p2 = name1;
    int res = str_cmp(p1,p2);
    printf("%d",res);
}