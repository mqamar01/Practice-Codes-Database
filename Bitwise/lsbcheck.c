#include <stdio.h>
#include <stdbool.h>

void showbits(int n)
{
    int i,j,mask;
    for (i=7;i>=0;i--)
    {
        mask = 1<<i;
        j = mask & n;
        (j==0) ? printf("0") : printf("1");
    }
    printf("\n");
}

bool checkLSB(int num)
{
    int mask = 0x00000001;
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
    int num = 6;
    showbits(num);
    bool ans = checkLSB(num);
    if (ans)
    {
        printf("LSB is one\n");
    }
    else 
    {
        printf("LSB is zero\n");
    }
}