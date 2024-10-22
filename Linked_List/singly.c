#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
} *head;

void add_at_start(int n)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = head;
    head = temp;
}

void add_at_end(int n)
{
    struct node *temp = head;
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->data = n;
    new->next = NULL;
}

void add_at_point(int n, int p)
{
    struct node *temp = head;
    struct node *new;
    struct node *next1;
    struct node *nexts;
    new = (struct node*)malloc(sizeof(struct node));
    for (int i=1; i<p; i++)
    {
        temp = temp->next;
    }
    next1 = temp->next;
    temp->next = new;
    new->data = n;
    new->next = next1;
}

void delete_start()
{
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void delete_end()
{
    struct node *temp = head;
    struct node *slast;
    while (temp->next != NULL)
    {
        slast = temp;
        temp = temp->next;
    }
    slast->next = NULL;
    free(temp);
}

void del_at_point(int n)
{
    struct node *temp = head;
    struct node *bin;
    for (int i=2; i<n; i++)
    {
        temp = temp->next;
    }
    bin = temp->next;
    temp->next = bin->next;
    free(bin);
}

void traverse()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int search(int target)
{
    while (head != NULL) 
    {
        if (head->data == target) 
        {
            return 1; 
        }
        head = head->next;
    }
    return 0; 
}

int main()
{
    add_at_start(5);
    add_at_start(2);
    add_at_start(3);
    add_at_end(36);
    traverse();
    add_at_point(26,2);
    traverse();
}