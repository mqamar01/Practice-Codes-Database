/*8. Write a function to swap the values of two pointers using double pointers.
Input: int a = 10, b = 20; int *p1 = &a, *p2 = &b;
Output: After swapping, p1 should point to b and p2 should point to a.*/
#include <stdio.h>
void swap(int **a, int **b)
{
    int temp = **a; 
    **a = **b;
    **b = temp;

}
int main()
{
    int a = 10,b = 20;
    int *p1 = &a;
    int *p2 = &b;
    int **x = &p1;
    int **y = &p2;
    swap(x,y);
    printf("New order: %d & %d",*p1,*p2);
}