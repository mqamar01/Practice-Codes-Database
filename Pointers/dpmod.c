/*Write a function that takes a double pointer (int **) and modifies
the value it points to.
Input: int x = 10; int *p = &x; modify_value(&p);
Output: Change x to a new value (e.g., 20).*/
#include <stdio.h>
modify(int **j)
{
    **j = 20;
}
int main()
{
    int a=12;
    int *i = &a;
    int **j = &i;
    printf("Before: %d",a);
    modify(j);
    printf("After: %d",a);
}