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

struct Node *insertAtindex(struct Node *head, int data, int index)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p=head;
    node->data = data;
    int i=0;
    while (i != index-1)
    {
            p=p->next;
            i++;
        }
        node->next = p->next;
        p->next=node;

    return head;
}

int main(){
struct Node *head;
struct Node *first;
struct Node *second;
head = (struct Node*)malloc(sizeof(struct Node));
first = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
head->data=1;
head->next=first;

first->data=2;
first->next=second;

second->data=3;
second->next=NULL;

display(head);
printf("\n");



head = insertAtindex(head,7,2);
display(head);
printf("\n");


return 0;
}