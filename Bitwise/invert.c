#include <stdio.h>

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

void setbit(int n,int *num)
{
    *num = 0<<n;
}

int main()
{
    int num = 0xFFFFFFFF;
    showbits(num);
    setbit(1,&num);
    showbits(num);
}