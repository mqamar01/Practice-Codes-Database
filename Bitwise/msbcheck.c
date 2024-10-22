#include <stdio.h>
#include <stdbool.h>

void showbits(int n)
{
    int i,j,mask;
    for (i=31;i>=0;i--)
    {
        mask = 1<<i;
        j = mask & n;
        (j==0) ? printf("0") : printf("1");
    }
    printf("\n");
}

bool checkMSB(int num)
{
    int mask = 0x80000000;
    if (mask & num)
    {
        return true;
    }
    else
    {
        return false; 
    }
}

int main()
{
    int num = 256;
    showbits(num);
    bool ans = checkMSB(num);
    if (ans)
    {
        printf("MSB is one\n");
    }
    else 
    {
        printf("MSB is zero\n");
    }
}