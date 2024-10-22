#include <stdio.h>
void showbits(int n)
{
    int i,j,mask;
    for (i=15;i>=0;i--)
    {
        mask = 1<<i;
        j = n & mask;
        (j==0) ? printf("0") : printf("1");
    }
    printf("\nNew line commences");
}
int main()
{
    int a;
    printf("Enter: ");
    scanf("%d",&a);
    showbits(a);
}
