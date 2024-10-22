#include <stdio.h>
void display(int *i,int n)
{
    for (int x = 0; x<n; x++)
    {
        printf("[%d]",*i);
        i++;
    }
}
int main()
{
    int arr[] = {34,23,15,76,35};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *a = &arr;
    display(a,size);
}