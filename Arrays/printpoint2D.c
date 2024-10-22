#include <stdio.h>
void display(int *i,int y,int n)
{
    for (int j = 0; j<y; j++)
    {
         for (int x = 0; x<n; x++)
        {
            printf("[%d]",*i);
            i++;
        }
        printf("\n");
    }
}
int main()
{
    int arr[2][4] = {34,23,15,76,35,43,23,1};
    int rows = 4;
    int columns = 2;
    int *a = &arr;
    display(a,rows,columns);
}