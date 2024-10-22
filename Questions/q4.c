/*Given pointers to the head of two sorted linked lists, merge them into a single, sorted linked list. 
It is possible that a head pointer may be null meaning that the corresponding list is empty.*/
#include <stdio.h>

struct list1
{
    int num1;
    struct list2 *next1;
} *head1;

struct list2
{
    int num2;
    struct list2 *next2;
} *head2;

int main()
{
    if (((head1->next1) != NULL) && ((head2->next2) != NULL))
    {
        struct list1 *temp1 = head1;
        struct list2 *temp2 = head2;
        while (temp1->next1 != NULL) //to find end of List 1
        {
            temp1 = temp1->next1;
        }
        temp1->next1 = head2; //connects end of List 1 to head of List 2
    }
    else 
    {
        printf("One or both linked lists are empty.");
    }
}