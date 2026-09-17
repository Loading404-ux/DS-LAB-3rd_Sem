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

        printf("Enter the Data for Node %d :",i);
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

        temp->next=head;
    }
    return head;
}

struct Node* displayList(struct Node *head)
{
    struct Node *temp=head;
    if(head==NULL)
    {
        printf("List is Empty !!\n");
        return;
    }
    else
    {
        while(temp->next!=head)
        {
            printf("%d ->",temp->data);
            temp=temp->next;
        }
        printf("%d ->head\n",temp->data);
    }
}

struct Node* insertAtBegining()
{
    struct Node *newNode,*temp;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element for the newNode :");
        scanf("%d",&newNode->data);
    
    if(head==NULL)
    {
        head=newNode;
        newNode->next=head;

        displayList(head);
    }
    else
    {
        temp=head;
        // update last Node head
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newNode;

        newNode->next=head;
        head=newNode;

        displayList(head);
    }
}

struct Node* insertAtEnd()
{
    struct Node *newNode,*temp;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element for the newNode :");
        scanf("%d",&newNode->data);

    if(head==NULL)
    {
        head=newNode;
        newNode->next=head;

        displayList(head);
    }
    else
    {
        temp=head;

        while(temp->next!=head)
        {
            temp=temp->next;
        }

        newNode->next=temp->next;
        temp->next=newNode;

        displayList(head);
    }
}

struct Node* insertAtspecPOS()
{
    int c=1,pos,i=1;
    struct Node *newNode,*temp;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element for the newNode :");
        scanf("%d",&newNode->data);

    printf("Enter the Position :");
        scanf("%d",&pos);

    if(pos==1)
    {
        temp=head;

        while(temp->next!=head)
            temp=temp->next;
        
        temp->next=newNode;

        newNode->next=head;
        head=newNode;

        displayList(head);
        return;
    }

    temp=head;
    while(temp->next!=head)
    {
        c++;
        temp=temp->next;
    }

    if(pos>c+1 || c<1)
    {
        printf("Invalid Position \n");
        return;
    }
    else
    {
        temp=head;

        while(i!=pos-1)
        {
            i++;
            temp=temp->next;
        }

        newNode->next=temp->next;
        temp->next=newNode;

        displayList(head);
        return;


    }
}

struct Node* deleteAtBegining()
{
    struct Node *temp,*temp2;

    if(head==NULL)
    {
        printf("List is Already Empty !!!\n");
        return;
    }

    if(head->next==head)
    {
        temp=head;
        printf("The Deleted Node is %d\n",temp->data);
        head=NULL;
        free(temp);
        
        displayList(head);
        return;
    }

    temp=head;
    temp2=head;

    while(temp2->next!=head)
    {
        temp2=temp2->next;
    }
    head=head->next;

    temp2->next=head;

    printf("The Deleted Node is %d\n",temp->data);
    free(temp);
    displayList(head);
        return;

}

struct Node* deleteAtEnd()
{
    struct Node *prev,*temp;

    if(head==NULL)
    {
        printf("List is Already Empty !!!\n");
        return;
    }

    if(head->next==head)
    {
        temp=head;
        printf("The Deleted Node is %d\n",temp->data);
        head=NULL;
        free(temp);
        
        displayList(head);
        return;
    }

    temp=head;

    while(temp->next!=head)
    {
        prev=temp;
        temp=temp->next;
    }

    prev->next=temp->next;

    printf("The Deleted Node is %d\n",temp->data);
    free(temp);
    displayList(head);

    return;
    
}

struct Node* deleteAtSpecPOS()
{
    struct Node *prev,*temp,*temp2;
    int pos,c=1,i=1;
    if(head==NULL)
    {
        printf("List is Already Empty !!!\n");
        return;
    }

    printf("Enter the Position :");
        scanf("%d",&pos);

    if(pos==1)
    {
        temp=head;
        temp2=head;

        while(temp2->next!=head)
        {
            temp2=temp2->next;
        }

        head=head->next;
        temp2->next=head;

        printf("The Deleted Node is %d\n",temp->data);
        free(temp);
        displayList(head);
        return;
    }

    temp=head;

    while(temp->next!=head)
    {
        c++;
        temp=temp->next;
    }

    if(pos>=c || c<1)
    {
        printf("Invalid Position \n");
        return;
    }
    else
    {
        temp=head;
        while(i!=pos)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }

        prev->next=temp->next;

        printf("The Deleted Node is %d\n",temp->data);
        free(temp);
        displayList(head);
        return;
    }

}

int main()
{
    int n;

    printf("Enter the Number Nodes :");
        scanf("%d",&n);
    
    struct Node *ptr=createList(n);

    displayList(ptr);
    int choice;
    do{
        printf("\n1.Insert at Begining \n");
        printf("2.Insert at End \n");
        printf("3.Insert at Specific Position \n");
        printf("4.Delete at Begining \n");
        printf("5.Delete at End \n");
        printf("6.Delete at Specific Position\n");
        printf("9.Exit ....\n");

        printf("Enter Your Choice :");
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
                insertAtspecPOS();
            break;

            case 4:
                deleteAtBegining();
            break;

            case 5:
                deleteAtEnd();
            break;

            case 6:
                deleteAtSpecPOS();
            break;

            case 9:
                printf("Exiting the Program !!\n");
            break;

            default:
                printf("Wrong Input !!\n");
        }

    }while(choice!=9);

    displayList(head);
}