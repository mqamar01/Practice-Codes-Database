/*Write a function that takes two integer arrays and their lengths as arguments 
and returns a new array that contains the sum of corresponding elements from 
the two arrays. Use pointer arithmetic instead of array indexing.*/
#include <stdio.h>

int arraysum(int a[], int b[], int n1, int n2)
{
    int *p1 = &a[0];
    int *p2 = &b[0];
    if (n1>=n2)
    {
        int arr[n1];
        for (int i=0;i<n1;i++)
        {
            //printf("Sum of %d elements: %d.\n",i,(*p1)+(*p2));
            int u = 0;
            a[i] = (*p1)+(*p2);
            p1+=1;
            u++;
            while (u<n2)
            {
                p2+=1;
            }
            printf("[%d]",a[i]);
        }
    }
    else
    {
        for (int i=0;i<n1;i++)
        {
            printf("Sum of %d elements: %d.\n",i,(*p1)+(*p2));
            p1+=1;
            p2+=1;
        }
    }
}

int main()
{
    int arr1[] = {3,4,5,6,7,89,76};
    int arr2[] = {2,8,4,1,5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int ans = arraysum(arr1,arr2,size1,size2);
}