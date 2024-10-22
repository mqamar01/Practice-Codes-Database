#include <stdio.h>
int factorial(int a)
{
    int fact;
    if (a==1)
    {
        return 1;
    }
    else 
    {
        fact = a*factorial(a-1);
    }
    return fact;
}
int main()
{
    int a = 3;
    int answer = factorial(a);
    printf("Factorial is %d",answer);
}