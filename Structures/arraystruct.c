/*There is a structure called employee that holds information
like employee code, name, date of joining. Write a program to
create an array of the structure and enter some data into it.
Then ask the user to enter current date. Display the names of
those employees whose tenure is 3 or more than 3 years
according to the given current date.*/
#include <stdio.h>
#define cur_year 2024
void display()
{
    for (int i=0;i<5;i++)
    {
        printf("%s\t%s\t%d\n",a[i].Pcode,a[i].name,a[i].year);
    }
}
typedef struct employee
{
    char Pcode[4];
    char name[40];
    int year;

}new;
new a[5];
int main()
{
    new a[0] = {"4123","Mubashir Siddique",2020};
    new a[1] = {"4124","Mubashir2 Siddique",2019};
    new a[2] = {"4125","Mubashir3 Siddique",2006};
    new a[3] = {"4126","Mubashir4 Siddique",2017};
    new a[4] = {"4127","Mubashir5 Siddique",2017};
    display();
}