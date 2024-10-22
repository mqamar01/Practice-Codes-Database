// Write C code to toggle nth bit of a number. Input both the number and the bit to toggle. Display
// both the input and output numbers in hex and binary representation.
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
}
void toggle(int a, int b)
{
    printf("Before: ");
    showbits(a);
    printf(" | 0x%x | %d\n",a,a);
    int mask=0;
    mask = 1<<b;
    int ans = mask^a;
    printf("After:  ");
    showbits(ans);
    printf(" | 0x%x | %d\n",ans,ans);
}
int main()
{
    int n,pos;
    printf("Enter integer value & nth bit: ");
    scanf("%d %d",&n,&pos);
    toggle(n,pos-1);
}