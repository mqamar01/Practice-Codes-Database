#include <stdio.h>
#include <stdlib.h>

typedef struct Doubly 
{
    int data;
    struct Doubly *nxt;
    struct Doubly *prv;
}Doubly;

Doubly *head;

void add_start(int n)
{
    Doubly *temp, *buff;
    temp = (Doubly*)malloc(sizeof(Doubly));
    temp->prv = NULL;
    temp->data = n;
    temp->nxt = head;
    head = temp;
}

delete_start()
{
    Doubly *buff,*temp;
    buff = head;
    temp = head;
    free(buff);
    head = temp->nxt;
}

void traverse (Doubly *ptr)
{
    Doubly *temp = ptr;
    while (temp != NULL)
    {
        printf("%d  ",temp->data);
        temp = temp->nxt;
    }
    printf("\n");
}
int main()
{
    add_start(3);
    add_start(4);
    add_start(5);
    traverse(head);
    //delete_start();
    //traverse(head);
}
