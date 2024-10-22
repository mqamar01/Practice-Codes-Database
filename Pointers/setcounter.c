/*4.Write a function to find the number of set bits in the integer.*/
#include <stdio.h>
int count_bits(int dec)
{
    int i,j=0,mask,count=0;
    for (i=7;i>=0;i--)
    {
        mask = 0;
        mask = 1<<i;
        j = mask & dec;
        if (j!=0)
        {
            count++;
        }
    }
    printf("Number of bits: %d",count);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    count_bits(n);
}