#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head=NULL;

struct Node* createList(int n)
{
    struct Node *temp=head;
    struct Node *newNode;
    for(int i=1;i<=n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the Data for Node %d : ",i);
            scanf("%d",&newNode->data);

        newNode->next=NULL;
        newNode->prev=NULL;

        if(head==NULL)
        {
            head=temp=newNode;
        }
        else
        {
            temp->next=newNode;
            newNode->prev=temp;
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
        printf("%d <->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

struct Node* insertAtBegining()
{
    struct Node *newNode,*temp=head;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data for the New Node :");
        scanf("%d",&newNode->data);

    newNode->prev=NULL;

    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;

        displayList(head);
        return;
    }
    else
    {
        head->prev=newNode;
        newNode->next=head;
        head=newNode;

        displayList(head);
        return;
    }
}

struct Node* insertAtEnd()
{
    struct Node *newNode,*temp=head;

     newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data for the New Node :");
        scanf("%d",&newNode->data);

    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
        newNode->prev=NULL;

        displayList(head);
        return;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        newNode->prev=temp;
        temp->next=newNode;

        displayList(head);
        return;
    }
    
}

struct Node* insertAtSpecPOS()
{
    struct Node *newNode,*temp=head;

    int pos,c=1,i=1;
     newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data for the New Node :");
        scanf("%d",&newNode->data);

    newNode->prev=NULL;
    newNode->next=NULL;

    printf("Enter the Position :");
        scanf("%d",&pos);

    if(pos==1)
    {
        head->prev=newNode;
        newNode->next=head;
        head=newNode;

        displayList(head);
        return;
    }

    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }

    if(pos>c+1 || c<1)
    {
        printf("Invalid Position !!\n");
        return;
    }
    else
    {
        temp=head;

        //while(i!=pos) ->for insert after POS
        //while(i!=pos-1) ->for insert AT POS
        while(i!=pos-1)  
        {
            i++;
            temp=temp->next;
        }

        newNode->prev=temp;
        newNode->next=temp->next;
        temp->next=newNode;
        newNode->next->prev=newNode;

        displayList(head);

        return;
    }
}

struct Node* deleteAtBegining()
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("List is Empty \n\n");
        return;
    }
    if(head->next==NULL)
    {
        printf("List Contains only One node : %d",temp->data);
        head=NULL;
        free(temp);
        displayList(head);
        return;
    }
    temp=head;
    printf("The Deleted Node is : %d\n",temp->data);
    

    head=head->next;
    head->prev=NULL;

    free(temp);

    displayList(head);
    return;
}

struct Node* deleteAtEnd()
{
    struct Node *temp=head,*prev;

    if(head==NULL)
    {
        printf("List is Empty \n\n");
        return;
    }
    if(head->next==NULL)
    {
        printf("List Contains only One node : %d",temp->data);
        head=NULL;
        free(temp);
        displayList(head);
        return;
    }
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    printf("The Deleted Node is : %d\n",temp->data);

    prev->next=NULL;

    free(temp);
    displayList(head);
    return;

}

struct Node* deleteAtSpecPOS()
{   
    int c=1,i=1;
    struct Node *temp=head,*prev;
    int pos;
    if(head==NULL)
    {
        printf("List is Empty \n\n");
        return;
    }
    printf("Enter the Position : ");
    scanf("%d",&pos);

    if(pos==1)
    {
        printf("The Deleted Node is : %d\n",temp->data);
        head=head->next;
        head->prev=NULL;
        free(temp);

        displayList(head);

        return;
    }

    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }

    if(pos>c || c<1)
    {
        printf("Invalid Position!!\n");
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
        printf("The Deleted Node is : %d\n",temp->data);
        prev->next=temp->next;

        if(temp->next != NULL)
            temp->next->prev=prev;

        free(temp);
        displayList(head);
        return;



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
int main()
{
    int n;
    printf("Enter the Numbers of Nodes :");
        scanf("%d",&n);

    struct Node *ptr=createList(n);

    displayList(ptr);

    int choice;

    do{
        printf("\n1.Insert At Begining \n");
        printf("2.Insert At End \n");
        printf("3.Insert At Specific Position \n");
        printf("4.Delete At Begining \n");
        printf("5.Delete At End \n");
        printf("6.Delete At Specific Position \n");
        printf("7.Sorting a List \n");
        printf("8.Reverse a List \n");
        printf("Enter Choice :");
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

            case 4:
                deleteAtBegining();
            break;

            case 5:
                deleteAtEnd();
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
                printf("Exiting the Program !!\n");
            break;

            default:
                printf("Wrong Input!!!\n");
        }
    }while(choice !=9);


}