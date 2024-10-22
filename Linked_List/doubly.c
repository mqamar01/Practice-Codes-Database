/*Implement a doubly linked list. Given the pointer to the head node of the doubly linked list,
reverse the order of the nodes in place. Return a reference to the head node of the reversed list.
Print both the original and the reversed linked list. Note: The head node might be NULL to
indicate that the list is empty.*/

#include <stdio.h>
#include <stdlib.h>

struct Doubly 
{
    int data;
    struct Doubly *nxt;
    struct Doubly *prv;
} *head;

void add(int n)
{
    struct Doubly *temp;
    temp = (struct Doubly *)malloc(sizeof(struct Doubly));
    temp->data = n;
    temp->nxt = head;
    temp->prv = NULL;
    head = temp;
}

void traverse(struct Doubly *ptr)
{
    struct Doubly *temp = ptr;
    while (temp != NULL)
    {
        printf("%d  ",temp->data);
        temp = temp->nxt;
    }
    printf("\n");
}

struct Doubly* reverse(struct Doubly *ptr)
{
    if (ptr == NULL)
    {
        return NULL;
    }
    struct Doubly *temp;
    temp = ptr->prv;
    ptr->prv = ptr->nxt;
    ptr->nxt = temp;
    if (ptr->prv == NULL)
    {
        return ptr;
    }
    else
    {
        reverse(ptr->prv);
    }
}

int main()
{
    add(3);
    add(5);
    add(10);
    traverse(head);
    struct Doubly *newhead = reverse(head);
    traverse(newhead);
}