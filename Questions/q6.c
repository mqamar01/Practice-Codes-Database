/*Write a C program to reverse a number. Take the number as an input and display its reverse. For
example, if input 5485643, output should be 3465845.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d",&num);
    int temp = 0;
    while (num != 0)
    {
        temp = num%10;
        num = num / 10;
        printf("%d",temp);
    }
    printf("\n");
}