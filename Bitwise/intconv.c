/*2.Write a function that takes an integer, a starting bit position, and 
the number of bits to extract as input, and returns the integer formed by those bits.
0101010101
5 2 4
00000000101*/
#include <stdio.h>
void bitconv(int n, int st, int count)
{
    int mask=0;
    for (int i=(st+count)-1;i>=st;i--)
    {
        mask += 1<<i;
    }
    int result = mask & n;
    int ans = result >> st;
    printf("The resulting integer is: %d",ans);
}
int main()
{
    double n,st,count;
    printf("Enter integer, starting bit, number of bits with spaces: ");
    scanf("%d %d %d",&n,&st,&count);
    bitconv(n,st,count);
}