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


struct Node* addPoly(struct Node *p1,struct Node *p2,int n)
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode;
    for(int i=1;i<=n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));

        
        
            newNode->coeff=p1->coeff+p2->coeff;
            newNode->expo=p1->expo;

            

        
        if(head==NULL)
        {
            head=temp=newNode;
        }
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
        p1=p1->next;
        p2=p2->next;

    }
    return head;
}
int main()
{
    int n1,n2;
    printf("Enter the Highest order of the Polynomial1 :");
        scanf("%d",&n1);

    printf("Enter the Highest order of the Polynomial2 :");
        scanf("%d",&n1);
    
    if(n1<1 )
    {
        printf("Code Terminated !!!\n");
        return 0;
    }
    else
    {
        struct Node *ptr1=createEq(n1);
        displayList(ptr1);

        struct Node *ptr2=createEq(n1);
        displayList(ptr2);

        struct Node *ptr=addPoly(ptr1,ptr2,n1);

        displayList(ptr);

    }
}