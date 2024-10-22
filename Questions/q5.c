/*Find all prime numbers in a given range. Take “min” and “max” numbers as an input and display all 
prime numbers within this range including min and max.*/
//prime numbers are divisible by 1 and number itself
#include <stdio.h>
int main()
{
    int min,max,flag;
    printf("Enter your range: ");
    scanf("%d,%d",&min,&max);
    printf("Prime numbers in your range are: ");
    for (int i=min;i<=max;i++)
    {
        flag = 0;
        for (int j=2;j<i;j++)
        {
            if (i%j == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}