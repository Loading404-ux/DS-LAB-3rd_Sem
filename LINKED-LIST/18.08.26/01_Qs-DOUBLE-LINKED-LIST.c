#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node *head=NULL;

struct Node* createNode(int value)
{
    struct Node *newNode;

    newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->prev=NULL;
    newNode->next=NULL;

    return newNode;
}


void insertAtBegining()
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the new data :");
    scanf("%d",&newNode->data);

    newNode->next=head;
    newNode->prev=NULL;

    if(head!=NULL)
        head->prev=newNode;

    head=newNode;

}

// Insertion at End
void insertAtEnd()
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node *temp;

    printf("Enter the new data :\n");
    scanf("%d",&newNode->data);

    newNode->next=NULL;

    if(head==NULL)
    {
        newNode->prev=NULL;
        head=newNode;
        return;
    }
    temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
    newNode->prev=temp;
}

void insertAtPosition()
{
    struct Node *newNode;
    struct Node *temp;

    int pos;

    newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter the new data :");
    scanf("%d",&newNode->data);

    printf("Enter the Position :");
    scanf("%d",&pos);

    if(pos==1)
    {
        newNode->next=head;
        newNode->prev=NULL;

        if(head!=NULL)
            head->prev=newNode;
        head=newNode;
        return;
    }

    temp=head;
    for(int i=1;i<pos-1;i++)
        temp=temp->next;

    newNode->next=temp->next;
    newNode->prev=temp;

    if(temp->next!=NULL)
        temp->next->prev=newNode;

    temp->next=newNode;
}

void deleteAtBegining()
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("List is Empty!!");
        return;
    }

    temp=head;
    head=head->next;

    if(head!=NULL)
        head->prev=NULL;
    
    free(temp);
}

void deleteAtEnd()
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    if(temp->prev!=NULL)
        temp->prev->next=NULL;
    else
        head=NULL;

    free(temp);
}

void deleteAtPosition()
{
    struct Node *temp;
    int pos;

    if(head==NULL)
    {
        printf("List is Empty!!\n");
        return;
    }

    printf("Enter the Position :");
    scanf("%d",&pos);

    temp=head;

    if(pos==1)
    {
        head=head->next;

        if(head!=NULL)
            head->prev=NULL;
        
        free(temp);
        return;
    }

    for(int i=1;i<pos;i++)
        temp=temp->next;
    
    if(temp->next!=NULL)
        temp->next->prev=temp->prev;
    
    temp->prev->next=temp->next;

    free(temp);
}

void display()
{
    struct Node *temp;

    temp=head;

    while(temp!=NULL)
    {
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }

    printf("NULL");
}

int main()
{
    int choice;

    do{
        printf("\n--------- DOUBLE LINKED LIST ---------\n\n");
        printf("1.Insert at Begining.\n");
        printf("2.Insert at End\n");
        printf("3.Insert at Any Position\n");
        printf("4.Delete at Begining.\n");
        printf("5.Delete at End\n");
        printf("6.Delete at Any Position\n");
        printf("7.Traverse the list\n");
        printf("8.Exit !!!\n");

        printf("Enter the Choice :");
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
                insertAtPosition();
            break;

            case 4:
                deleteAtBegining();
            break;

            case 5:
                deleteAtEnd();
            break;

            case 6:
                deleteAtPosition();
            break;

            case 7:
                display();
            break;

            case 8: 
                printf("Exiting the Program!!\n");
                exit(0);
            break;

            default:
                printf("Wrong Input !!\t Enter Again!!!\n");
        }
    }while(choice!=8);
    return 0;
}