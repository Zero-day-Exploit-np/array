#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
void print(struct Node * head){
    struct Node * a=head;
    do{
        printf(" %d ", a->data);
        a=a->next;

    }while(a!=head);
}

struct Node * insertAtFirst(struct Node * head, int data){
    struct Node * a;
    a=(struct Node*)malloc(sizeof(struct Node));
    a->data=data;
    struct Node * pre=head;
            pre=pre->next;
        
        while(pre->next!=head){
            pre=pre->next;
        }
        pre->next=a;

        a->next=head;
        return a;    
}


struct Node * insertAtlast(struct Node * head, int data){
    struct Node * a;
    a=(struct Node*)malloc(sizeof(struct Node));
    a->data=data;
    struct Node * pre=head;
            pre=pre->next;
        
        while(pre->next!=head){
            pre=pre->next;
        }
        pre->next=a;

        a->next=head;
        return head;    
}

struct Node * insertAtmiddel(struct Node * head, int data, int index){
    struct Node * a;
    int count=0;
    a=(struct Node*)malloc(sizeof(struct Node));
    a->data=data;
    struct Node * ptr=head;
    struct Node * pre=head;
        pre=pre->next;
        while(count<index-1){
            ptr=ptr->next;
            pre=pre->next;
            count++;
        }

        ptr->next=a;

        a->next=pre;
        return head;    
}

int main(){
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

    print(head);
    printf(" \n");

    head=insertAtFirst(head, 0);
    print(head);
    printf(" \n");

    
    head=insertAtlast(head, 6);
    print(head);
    printf(" \n");

    head=insertAtmiddel(head, 7,2);
    print(head);
    printf(" \n");

    return 0;
}