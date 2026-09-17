#include<stdio.h>
#include<stdlib.h>

struct Node{
    int coeff;
    int expo;
    struct Node *next;
};

struct Node *head=NULL;

struct Node* createEq(int n)
{
    struct Node *newNode;
    struct Node *temp=head;

    for(int i=n;i>=1;i--)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter the Coefficient for Exponent %d :",i);
            scanf("%d",&newNode->coeff);
        
        newNode->expo=i;

        newNode->next=NULL;
        if(head==NULL)
        {
            head=temp=newNode;
        }
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
    }
    return head;
}

struct Node* displayList(struct Node *head)
{
    struct Node *temp=head;

    if(temp==NULL)
    {
        printf("List is Empty\n");
        return;
    }
    while(temp!=NULL)
    {
        if(temp->next==NULL)
            printf("%dx^%d ",temp->coeff,temp->expo);
        else
            printf("%dx^%d +",temp->coeff,temp->expo);
            
        temp=temp->next;

    }
}

int main()
{
    int n;
    printf("Enter the Highest order of the Polynomial :");
        scanf("%d",&n);
    
    if(n<1)
    {
        printf("Code Terminated !!!\n");
        return 0;
    }
    else
    {
        struct Node *ptr=createEq(n);
        displayList(ptr);
    }
}