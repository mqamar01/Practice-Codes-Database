/*3.Create a header file math_operations.h and a corresponding .c file:
In math_operations.h, declare functions: find_max and find_min, find_mean, find_median and sort_array
to find the maximum, minimum, mean, median and sort the array in the ascending order.
Use header guards (#ifndef, #define, #endif) in the .h file to prevent multiple inclusions.
Write a main.c file that includes math_operations.h and calls both functions.
Test the program by including math_operations.h multiple times in main.c.*/

#include <stdio.h>
#include "math_op.h"

int main()
{
    int arr[] = {32,234,1,563,2345,23,21};
    int ma = find_max(arr);
    int mi = find_min(arr);
    printf("Max is %d\nMin is %d\n",ma,mi);
}
