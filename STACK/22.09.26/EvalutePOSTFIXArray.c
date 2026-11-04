#include <stdio.h>
#include <stdlib.h>

int stack[50], top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[50];

    printf("Enter the Postfix Equavalance :");
        scanf(" %[^\n]",exp);

    int n = strlen(exp), i, a, b;

    for(i = 0; i < n; i++)
    {
        if(exp[i] >= '0' && exp[i] <= '9')
        {
            push(atoi(exp[i]));
        }
        else
        {
            b = pop();
            a = pop();

            if(exp[i] == '+')
                push(a + b);
            else if(exp[i] == '-')
                push(a - b);
            else if(exp[i] == '*')
                push(a * b);
            else if(exp[i] == '/')
                push(a / b);
        }
    }

    printf("Result = %d", pop());

    return 0;
}