/*Q.Write C program to check the validity of an IPv4 address. Input IPv4 address as an input string and 
print whether the address is valid or not. Few invalid IPv4 addresses are 192.168.665.4, 10:3.4.6, 55.43.3, ab.3.4.5.*/

#include <stdio.h>

int checkIP(char str1[])
{
    int A = 0,B = 0,C = 0,D = 0;
    char *ptr = str1;
    int num1 = 0;
    while (*ptr != '.')
    {
        num1 *= 10;
        num1 += ((int)(*ptr)-48);
        ptr++;
    }
    ptr++;
    if (num1<256 && num1>=0)
    {
        A = 1;
    }
    //printf("%d is checkA\n",num1);
    //2nd Octate
    int num2 = 0;
    while (*ptr != '.')
    {
        num2 *= 10;
        num2 += ((int)(*ptr)-48);
        ptr++;
    }
    ptr++;
    if (num2<256 && num2>=0)
    {
        B = 1;
    }
    //printf("%d is checkB\n",num2);
    //3rd Octate
    int num3 = 0;
    while (*ptr != '.')
    {
        num3 *= 10;
        num3 += ((int)(*ptr)-48);
        ptr++;
    }
    ptr++;
    if (num3<256 && num3>=0)
    {
        C = 1;
    }
    //printf("%d is checkC\n",num3);
    //4th Octate
    int num4 = 0;
    while (*ptr != '\0')
    {
        num4 *= 10;
        num4 += ((int)(*ptr)-48);
        ptr++;
    }
    if (num4<256 && num4>=0)
    {
        D = 1;
    }
    //printf("%d is checkD\n",num4);
    //final logic
    if (A && B && C && D)
    {
        return printf("Valid IP!\n");
    }
    else
    {
        return printf("Invalid IP!\n");
    }

}

int main()
{
    char IP[] = "1.1.10.240";
    checkIP(IP);
}