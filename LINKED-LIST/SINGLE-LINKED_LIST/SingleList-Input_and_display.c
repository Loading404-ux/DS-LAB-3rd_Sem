#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

struct Node* createList(int n)
{
    struct Node *temp,*newNode;

    for(int i=0;i<n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data of %d Node :",i+1);
            scanf("%d",&newNode->data);
        
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

    // check Linked is already empty or not
    if(head == NULL)
    {
        printf("Linked is Empty \n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{

    int n;

    printf("Enter the Total Number of Ndoes :");
        scanf("%d",&n);

    int *ptr=createList(n);
    displayList(ptr); 
    return 0;
}