#include <stdio.h>
char stack[20];
int top = -1;
void push(char q)
{
    stack[++top] = q;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char m)
{
    if (m == '[' || m == '{' || m == '(')
        return 0;
    if (m == '+' || m == '-')
        return 1;
    if (m == '*' || m == '/')
        return 2;
}
int main()
{
    char exp[20];
    char *e, x;
    printf("Enter the expression :: ");
    scanf("%s", exp);
    e = exp;
    while (*e != '\0')
    {
        if (isalnum(*e))
            printf("%c", *e);
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
                printf("%c", pop());
            push(*e);
        }
        e++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}
