#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 90;
    third->next = fourth;

    fourth->data = 60;
    fourth->next = NULL;
    display(head);
    printf("\n");
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 10);

    display(head);
    printf("\n");

    return 0;
}