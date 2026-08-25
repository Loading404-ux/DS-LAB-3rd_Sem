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

        printf("Enter the data for Node %d :",i+1);
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
        printf("\nList is Empty !!");
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


struct Node *deleteAtBegining()
{
    struct Node *temp=head;

    if(temp==NULL)
    {
        printf("Empty List !!!\n");
        return 0;
    }
    printf("The Deleted Node is %d \n",temp->data);
    head=head->next;
    free(temp);

    displayList(head);
}

struct Node *deleteAtEnd()
{
    struct Node *temp=head,*prev;

    if(temp==NULL)
    {
        printf("The List is Empty!!\n");
        return 0;
    }
    if(temp->next==NULL)
    {
        printf("The List has only one Node %d",temp->data);
        head=NULL;
        free(temp);
        return 0;
    }

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }

    printf("The Deleted Node is %d",temp->data);
    prev->next=NULL;
    free(temp);

    displayList(head);
}

struct Node* deleteAtSpecPOS()
{
    int pos,i=1,c=1;
    struct Node *temp=head,*prev;

    printf("Enter the Position :");
        scanf("%d",&pos);

    if(pos==1)
    {
        deleteAtBegining();
        return;
    }

    while(temp->next!=NULL)
    {
        temp=temp->next;
        c++;
    }

    if(pos>c || pos<1)
    {
        printf("Invalid Position !!!");
        return 0;
    }
    else
    {
        temp=head;

        while(i<pos)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        printf("The Deleted Node is %d\n",temp->data);
        prev->next=temp->next;
        free(temp);
        
        displayList(head);

        return 0;
    }
}
int main()
{
    int n;

    printf("Enter the size of the Linked List :");
        scanf("%d",&n);

    struct Node *ptr=createList(n);

    displayList(ptr);

    int choice;

    printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                deleteAtBegining();
            break;

            case 2:
                deleteAtEnd();
            break;

            case 3:
                deleteAtSpecPOS();
            break;

            default:
                printf("Wrong Input !!");
        }
    
    return 0;
}