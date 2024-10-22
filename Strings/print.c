#include <stdio.h>
int main()
{
    int a[3] = {32,33,34};
    int *ptr = a;
    int (*x)[3] = &a; //array pointer
    int **ptr1 = &ptr; //double pointer
    printf("*x[1] = %d\n&a[1] = %d",*x[1],a+1);
}