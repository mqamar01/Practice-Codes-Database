/*1.Given an array of integers with repeated values, use bitwise operators 
to store only the non-repeated elements in an array.
Input: [4, 2, 5, 4, 2, 3, 6, 6]
Output: [5, 3]*/
#include <stdio.h>
void displayarr(int a[])
{
    int size = sizeof(a)/sizeof(a[0]);
    for (int i=0;i<size;i++)
    {
        printf("[%d]",a[i]);
    }
}
void repeat(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        int temp = a[i];
        for (int j=i+1;j<n;j++)
        {
            int x = a[j] ^ temp;
            if (x==0)
            {
                a[i] = 0;
            }
        }
    }
    displayarr(a);
}
int main()
{
    int flag;
    int arr[] = {43,12,7,43,12,62,7,69};
    int size = sizeof(arr)/sizeof(arr[0]);
    repeat(arr,size);
}