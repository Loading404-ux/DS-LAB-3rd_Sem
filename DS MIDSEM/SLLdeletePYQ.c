#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

struct Node* createList(int n)
{
    struct Node *newNode,*temp=head;

    for(int i=1;i<=n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data :");
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
}

struct Node *displayList(struct Node *head)
{
    struct Node *temp=head;

    if(head==NULL)
    {
        printf("List is Empty !!");
        return;
    }

    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

struct Node* deleteAtPYQ(int key)
{
    struct Node *temp=head,*prev;
    if(head==NULL)
    {
        printf("List is Empty !!");
        return;
    }

    while(temp!=NULL)
    {
        if(temp->data%key!=0)
        {

            if(temp==head)
            {
                head=head->next;
                free(temp);
                temp=head;
            }
            
            else
            {
                prev->next=temp->next;
                free(temp);
                temp=prev->next;
            }
        }
        else
        {
        prev=temp;
        temp=temp->next;
        }
    }
    
}

int main()
{
    int n;
    printf("Enter the NUmber of Nodes :");
        scanf("%d",&n);
    
    createList(n);

    displayList(head);


    int key;
    printf("Enter the KEY  :");
        scanf("%d",&key);

    deleteAtPYQ(key);
    displayList(head);

}