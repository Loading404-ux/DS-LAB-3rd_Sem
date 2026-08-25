#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

struct Node* createList(int n)
{
    struct Node *newNode,*temp;

    for(int i=0;i<n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data for %d Node :",i+1);
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

    if(head==NULL)
    {
        printf("Linked List is Empty.\n");
        return 0;
    }

    printf("\nLINKED LIST :");
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

}

void insertAtBegining()
{
    struct Node *newNode;

    newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data for the New Ndoe :");
        scanf("%d",&newNode->data);

    newNode->next=head;

    head=newNode;

    displayList(head);
}

void insertAtEnd()
{
    struct Node *newNode;
    struct Node *temp=head;

    newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data for the New Ndoe :");
        scanf("%d",&newNode->data);

    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newNode;
    displayList(head);
}

struct Node* insertAtSpecPOS()
{
    int pos,c=1,i=1;
    struct Node *newNode,*temp=head;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data for New Node :");
        scanf("%d",&newNode->data);

    printf("Enter the Position for Inserting thr New Node :");
        scanf("%d",&pos);

    while(temp->next!=NULL)
    {
        temp=temp->next;
        c++;
    }

    if(pos>c+1)
    {
        printf("Invalid Position \n\n");
        return head;
    }
    else
    {
        temp=head;

        while(i>pos)
        {
            temp=temp->next;
            i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
    displayList(head);
}
int main()
{
    int n;

    printf("Enter the Number of Nodes :");
        scanf("%d",&n);

    struct Node *ptr=createList(n);

    displayList(ptr);

    

    int choice;

    printf("Enter Your Choice : ");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            insertAtBegining();
        break;

        case 2:
            insertAtEnd();
        break;

        case 3:
            insertAtSpecPOS();
        break;

        default:
            printf("Wrong Choice !!");
    }
    return 0;
}