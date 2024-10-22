/*9.Read about how call by reference allows a function to return multiple 
values by modifying variables directly. Then, write a function that uses 
call by reference to calculate both the minimum and maximum values from 
an array of integers.*/
#include <stdio.h>
void minmax(int * a[], int *n)
{
    int max = *a[0],min = *a[0];
    for(int i=1;i<n;i++)
    {
        if (*a[i]>min) and this automatically becomes a change litmus
        {
            max = *a[i];
        }
        if (*a[i]<min)
        {
            min = *a[i];
        }
    }
    printf("Largest is: %d, Smallest is: %d",max,min);
}
int main()
{
    int arr[] = {34,21,13,56,234,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    minmax(&arr,&size);
}
