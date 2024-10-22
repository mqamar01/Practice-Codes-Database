#include <stdio.h>
int main() 
{
    char str[] = "222";
    char *ptr = str;
    int num = 0;
    for (int i=0;i<3;i++)
    {
        num *= 10;
        num += ((int)(*ptr)-48);
        ptr++;
    }
    printf("%d",num);
}