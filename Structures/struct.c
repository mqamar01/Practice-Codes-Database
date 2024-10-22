//Write a program that has struct in struct & passes value to function of stores
#include <stdio.h>
#pragma pack(1)
struct book
{
    char name[10];
    char isbn[10];
    int pages;
};
struct stores
{
    char name1[10];
    struct book b1;
};
void display(struct stores b)
{
    printf("%ld\t%ld\t%ld\t%ld",&b.name1,&b.b1.name,&b.b1.isbn,&b.b1.pages);
}

int main()
{
    struct stores A = {"Johar","Let us C","987698",683};
    display(A);
}
