#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void print(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
}

struct Node *insertAtfirst(struct Node *head, int data)
{
    struct Node *a = (struct Node *)malloc(sizeof(struct Node));
    a->data = data;
    a->next = head;
    head->prev = a;
    a->prev = NULL;

    return a;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *a = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    a->data = data;
    ptr = ptr->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = a;
    a->prev = ptr;
    a->next = NULL;

    return head;
}

struct Node *InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *a = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    struct Node *ptr1 = head;

    int count = 0;
    a->data = data;
    ptr1 = ptr1->next;
    while (count < index - 1)
    {
        ptr = ptr->next;
        ptr1 = ptr1->next;
        count++;
    }

    a->prev = ptr;
    a->next = ptr->next;

    ptr1->prev = a;
    ptr->next = a;

    return head;
}

int main()
{
    struct Node *head;
    struct Node *a;
    struct Node *b;
    struct Node *c;
    head = (struct Node *)malloc(sizeof(struct Node));
    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 1;
    head->next = a;

    a->prev = head;
    a->data = 2;
    a->next = b;

    b->prev = a;
    b->data = 3;
    b->next = c;

    c->prev = b;
    c->data = 4;
    c->next = NULL;

    print(head);
    printf("\n");

    head = insertAtfirst(head, 0);
    print(head);
    printf("\n");

    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 6);
    print(head);
    printf("\n");

    head = InsertAtIndex(head, 7, 1);
    print(head);
    printf("\n");

    return 0;
}