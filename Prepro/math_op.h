/*3.Create a header file math_operations.h and a corresponding .c file:
In math_operations.h, declare functions: find_max and find_min, find_mean, find_median and sort_array
to find the maximum, minimum, mean, median and sort the array in the ascending order.
Use header guards (#ifndef, #define, #endif) in the .h file to prevent multiple inclusions.
Write a main.c file that includes math_operations.h and calls both functions.
Test the program by including math_operations.h multiple times in main.c.*/
#define CONDITION

#ifndef CONDITION

int find_max(int a[])
{
    int max = a[0];
    int size = sizeof(a)/sizeof(a[0]);
    for (int i=1;i<size;i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}

int find_min(int a[])
{
    int min = a[0];
    int size = sizeof(a)/sizeof(a[0]);
    for (int i=1;i<size;i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
    }
    return min;
}

#endif

