#include <stdio.h>

int displayNumbers(char *);

int main()
{
    char *str = "123;9F80;4mb893;6#2&94";
    int ans = displayNumbers(str);
    printf("\nCount is: %d",ans);
}

int displayNumbers(char *s)
{
    int count = 0;
    while (*s != '\0')
    {
        if ((int)*s >= '0' && (int)*s <= 57)
        {
            int i = (int)*s - 48;
            printf("%d ",i);
            count++;
        }
        if (*s == ';')
        {
            if ((int)*(s+1) >= 48 && (int)*(s+1) <= 57 && ((int)*(s+1)-'0')>((int)*(s-1)-48))
            {   
                int y = ((int)*(s-1)-48) + 1;
                while (y<((int)*(s+1)-48))
                {
                    printf("%d ",y);
                    y++;
                    count++;
                }
            }
        }
        *s++;
    }
    return count;
}
