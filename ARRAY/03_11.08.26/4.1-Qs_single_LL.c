#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;
// struct Node* createList(int n)
// {
//     struct Node *head,*newNode,*temp;
//     head=NULL;
//     for(int i=1;i<=n;i++)
//     {
//         newNode=(struct newNode*)malloc(sizeof(struct Node));
//         printf("Enter data for node %d: ",i);
//         scanf("%d",&newNode->data);

//         newNode->next=NULL;
//         if(head == NULL)
//         {
//             head=newNode;
//             temp=head;
//         }
//         else
//         {
//             temp->next=newNode;
//             temp=newNode;
//         }
//     }
//     return head;
// }

void insertAtPos(int value,int pos)
{
    struct Node *newNode,*temp;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    if(pos == 1)
    {
        newNode->next=head;
        head=newNode;
    }
    else{
        temp=head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

void deleteAtPos(int pos)
{
    struct Node *temp, *ptr;
    if(pos==1)
    {
        pos=head;
        head=head->next;
        free(ptr);
    }
    else
    {
        temp=head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        ptr=temp->next;
        temp->next=ptr->next;
        free(ptr);
    }
}

// Count Nodes
void countNode(){
    struct Node *temp=head;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    printf("Numbers of Node =%d\n",c);
}

void displayNode()
{
    struct Node *temp=head;
    while(temp !=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int n,value,pos;

    printf("Enter number of Nodes:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter value:");
        scanf("%d",&value);

        insertAtPos(value,i);
    }


    printf("1. Insert a node at specific position \n");
    printf("2. Deletion of an element from specific position\n");
    printf("3. Count nodes\n");
    printf("4. Traverse the linked list\n");
    printf("Enter the choice:");

    int choice;

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter Value:");
        scanf("&d",&value);
        printf("Enter the Position: ");
        scanf("%d",&pos);
        insertAtPos(value,pos);
            break;

        
        case 2:
        printf("Enter the Position: ");
        scanf("%d",&pos);
        deleteAtPos(pos);
            break;


        case 3:
        countNode();
            break;

        case 4:
        displayNode();
            break;

        default:
            printf("Wrong Input!!!");
    }
}