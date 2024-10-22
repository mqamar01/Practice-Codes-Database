/*example of a function that sums the 
elements of an array and uses pointer manipulation to access those elements.*/
#include <stdio.h>
int sum(int arr[])
{
    int *p = &arr[0];
    int sum=0;
    for (int i=0;i<6;i++)
    {
        sum += *p;
        p += 1;
    }
    return sum;

}
int main()
{
    int a[6] = {32,12,41,55,31,67};
    int add = sum(a);
    printf("The sum is: %d",add);
}