#include <stdio.h>
typedef struct student
{
    char name[10];
    int roll;
    int age;
}stu;
int main()
{
    stu b1 = {"Murt",4047,23};
    stu *ptr = &b1;
    printf("%s",ptr->name);
}