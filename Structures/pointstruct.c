//Write a program that reads struct member by call by ref
#include <stdio.h>
struct book 
{
    char name[10];
    int isbn;
    int pages;
};
void display(struct book *b)
{
    printf("%s\t%d\t%d",b->name,b->isbn,b->pages);
}
int main()
{
    struct book letusc = {"Let us C",98678685,6833};
    display(&letusc);
}