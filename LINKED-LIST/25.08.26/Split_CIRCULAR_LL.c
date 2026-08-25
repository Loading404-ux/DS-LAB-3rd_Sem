#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

struct Node* createList(int n)
{
    struct Node *newNode;

    for(int i=1;i<=n;i++)
    {
        struct Node *temp;
        newNode=(struct Node*)malloc(sizeof(struct Node));
        
        printf("Enter the Data for Node %d :",i);
            scanf("%d",&newNode->data);

        newNode->next=NULL;

        if(head==NULL)
            head=temp=newNode;
        else
        if(i==n)
            temp->next=head;
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
    }
    return head;
}

struct Node* displayList(struct Node* head)
{
    struct Node *temp=head;

    if(head==NULL)
    {
        printf("Empty list \n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("head\n");
}
int main()
{
    int n;
    printf("Enter the Number the Nodes :");
        scanf("%d",&n);

    struct Node *ptr=createList(n);
    displayList(ptr);
}