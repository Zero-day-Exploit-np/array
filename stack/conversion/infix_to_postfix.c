#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *s)
{
    return s->top == -1;
}

int isFull(struct stack *s)
{
    return s->top == s->size - 1;
}

void push(struct stack *s, char data)
{
    if (isFull(s))
    {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++s->top] = data;
}

char pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    return s->arr[s->top--];
}

char stackTop(struct stack *s)
{
    return s->arr[s->top];
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    if (ch == '+' || ch == '-')
        return 2;
    return 0;
}

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

char *infixTopost(char *infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = strlen(infix);
    s->top = -1;
    s->arr = (char *)malloc(s->size);

    char *postfix = (char *)malloc(strlen(infix) + 1);

    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            while (!isEmpty(s) &&
                   precedence(infix[i]) <= precedence(stackTop(s)))
            {
                postfix[j++] = pop(s);
            }
            push(s, infix[i++]);
        }
    }

    while (!isEmpty(s))
    {
        postfix[j++] = pop(s);
    }

    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a+b-c/d";
    printf("Postfix is: %s\n", infixTopost(infix));
    return 0;
}
