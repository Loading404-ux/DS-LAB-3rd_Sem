#include<stdio.h>

#define MAX 999

int stack[MAX];
int front=-1;
int rear=-1;

void acceptElement(int front,int rear)
{
    printf("Enter the element :");
    for(int i=front;i<=rear;i++)
    {
        scanf("%d",&stack[i]);
    }
}

void displayElement(int front,int rear)
{
    printf("\n\nThe Elements are :");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",stack[i]);
    }
}

void pushElement()
{
    
}
int main()
{
    int n;
    printf("Enter the Number of Elements :");
        scanf("%d",&n);
    
    int arr[999];

    front=0;
    rear=n-1;
    acceptElement(front,rear);

    displayElement(front,rear);

    pushElement();
}