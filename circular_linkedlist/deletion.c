#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *a = head;
    do
    {
        printf(" %d ", a->data);
        a = a->next;
    } while (a != head);
}

struct Node *DeletingAtFirst(struct Node *head)
{
    struct Node *a = head;

    a = a->next;

    while (a->next != head)
    {
        a = a->next;
    }
    struct Node *temp = head;
    head = head->next;
    a->next = head;

    free(temp);
    return head;
}

struct Node *deletingLastNode(struct Node *head)
{
    struct Node *a = head;
    struct Node *b = head;
    a = a->next;
    while (a->next != head)
    {
        a = a->next;
        b = b->next;
    }
    b->next = head;
    free(a);
    return (head);
}

struct Node * deletingMiddleNode(struct Node * head, int index){

    struct Node *a = head;

    for(int i=0; i<index-1; i++){
        a=a->next;

    }
    struct Node * b = a->next;
    a->next=b->next;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *a;
    struct Node *b;
    struct Node *c;
    struct Node *d;

    head = (struct Node *)malloc(sizeof(struct Node));
    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));
    d = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = a;

    a->data = 2;
    a->next = b;

    b->data = 3;
    b->next = d;

    d->data=5;
    d->next=c;

    c->data = 4;
    c->next = head;

    display(head);
    printf(" \n");

    head = DeletingAtFirst(head);
    display(head);
    printf(" \n");

    head = deletingLastNode(head);
    display(head);
    printf(" \n");

    head = deletingMiddleNode(head,1);
    display(head);
    printf(" \n");

    return 0;
}