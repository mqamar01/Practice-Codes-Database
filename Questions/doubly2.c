#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node* reverse(struct node *ptr) 
{
    if (ptr == NULL)
    {
        return NULL;
    }
    struct node *temp;
    temp = ptr->prev;
    ptr->prev = ptr->next;
    ptr->next = temp;
    if (ptr->prev == NULL)
    {
        return ptr;
    }
    else
    {
        reverse(ptr->prev);
    }
}

void traverse(struct node *node) 
{
    while (node != NULL) 
    {
        printf("%d  ", node->data);
        node = node->next;
    }
    printf("\n");
}

struct node* add(int n) 
{ 
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

int main() 
{
    struct node *head = add(2);



    head->next= add(8); //N1


    head->next->prev = head; 

    
    head->next->next = add(5);

    head->next->next->prev = head->next;
    head->next->next->next = add(1);
    head->next->next->next->prev = head->next->next;
    printf("Before =   ");
    traverse(head);
    head = reverse(head);
    printf("After =    ");
    traverse(head);
    return 0;
}