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

    for(int i=1;i<=n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data of Node -> %d :",i);
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
        printf("The List is Empty !!\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}


struct Node* insertAtBegining()
{
    struct Node *newNode;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data for the NewNode :");
        scanf("%d",&newNode->data);

    newNode->next=head;
    head=newNode;

    printf("List after Inserting Node in Begining :\n");
    displayList(head);
}

struct Node* insertAtEND()
{
    struct Node *newNode,*temp=head;

    newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data for the newNode :");
        scanf("%d",&newNode->data);

    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newNode;

    printf("List After Entering Node at End :\n");
        displayList(head);

    
}

struct Node* insertAtSpecPOS()
{
    int pos;
    int i=1;
    struct Node *newNode,*temp=head;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data for the NewNode :");
        scanf("%d",&newNode->data);

    printf("Enter the Position :");
        scanf("%d",&pos);

    if(pos==1)
    {
        newNode->next=head;
        head=newNode;

        displayList(head);
        return;
    }
    int c=1;
    // count Node
    while(temp->next!=NULL)
    {
        c++;
        temp=temp->next;
    }

    if(pos>c+1)
    {
        printf("Invalid Position \n");
        return;
    }
    else
    {
        temp=head; //reset temp
        while(i!=pos-1){
            i++;
            temp=temp->next;
        }

        newNode->next=temp->next;
        temp->next=newNode;

        displayList(head);
    }

}

struct Node* deleteAtBegining()
{
    struct Node *temp=head;
    if(head==NULL)
    {
        printf("List is Already Empty!!\n");
        return;
    }
    printf("The Deleted Node is %d",temp->data);
    head=temp->next;
    free(temp);

    displayList(head);
}

struct Node* DeleteAtEnd()
{
    struct Node *temp=head,*prev;
    if(head==NULL)
    {
        printf("List is Already Empty\n");
        return;
    }
    if(temp->next==NULL)
    {
        printf("The List has only One Element : %d",temp->data);
        head=NULL;
        free(temp);
        return;
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
    struct Node *temp=head,*prev;

    int pos,c=1,i=1;
    printf("Enter the Position :");
        scanf("%d",&pos);

    if(pos==1)
    {
        printf("The Deleted Node is %d\n\n",temp->data);
        head=temp->next;
        free(temp);
        displayList(head);
        return;
    }
    
    while(temp->next!=NULL)
    {
        c++;
        temp=temp->next;
    }

    if(pos>c || pos<1)
    {
        printf("Invalid Position !!\n");
        return;
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

        printf("The Deleted Node is %d\n\n",temp->data);
        prev->next=temp->next;
        free(temp);

        displayList(head);
    }
}

struct Node* sortList()
{
    struct Node *temp=head;
    if(head==NULL)
    {
        printf("Sorting is Not Possible \n List is Empty !!!\n");
        return;
    }
    if(temp->next==NULL)
    {
        printf("Sorting is Not Possible \n Only 1 Node \n");
        displayList(head);
        return;
    }
    

    int temp_num;
    for(struct Node *i = head ; i != NULL ; i = i->next)
    {
        for(struct Node *j = i->next ; j != NULL ; j = j->next)
        {
            if(i->data > j->data)
            {
                temp_num=i->data;
                i->data=j->data;
                j->data=temp_num;
            }
        }
    }

    printf("The sorted Linked List is :\n");
        displayList(head);


}

struct Node* reverseList()
{
    struct Node *temp=head;
    struct Node *prev=NULL;
    struct Node *temp2;

    while(temp!=NULL)
    {
        temp2=temp->next;
        temp->next=prev;

        prev=temp;
        temp=temp2;

    }
    head=prev;

    displayList(head);
}
int main()
{
    int n;

    printf("Enter the Numbers of Nodes :");
        scanf("%d",&n);

    struct Node *ptr=createList(n);
    displayList(ptr);

    int choice;
    do{
        printf("\n-----------------------------------------\n");
        printf("\n1. Insert at Begining .\n");
        printf("2.Insert at End \n");
        printf("3.Insert at Specific Position\n");
        printf("4.Delete at Begining \n");
        printf("5.Delete at End \n");
        printf("6.Delete at Specific Position \n");
        printf("7.Sort a List \n");
        printf("8.Reverse a List\n");
        printf("9.Exit...\n");

        printf("Enter the CHOICE :");
            scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertAtBegining();
            break;

            case 2:
                insertAtEND();
            break;

            case 3:
                insertAtSpecPOS();
            break;

            case 4:
                deleteAtBegining();
            break;

            case 5:
                DeleteAtEnd();
            break;

            case 6:
                deleteAtSpecPOS();
            break;

            case 7:
                sortList();
            break;

            case 8:
                reverseList();
            break;

            case 9:
                printf("Exiting Program!!\n");
            break;

            default:
                printf("Wrong Input !! Enter Again \n\n");
        }
    }while(choice!=9);
    return 0;
}