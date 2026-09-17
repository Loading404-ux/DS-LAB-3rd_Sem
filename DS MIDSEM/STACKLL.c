#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top=NULL;

struct Node* push()
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    
    if(newNode==NULL)
    {
        printf("Stack Overflow!!\n");
        return;
    }

    printf("Enter the data :");
        scanf("%d",&newNode->data);

    newNode->next=top;
    top=newNode;

    printf("%d item Pushed Successfully \n",top->data);
}

struct Node* pop()
{
    struct Node *temp;
    if(top==NULL)
    {
        printf("Underflow !\n");
        return;
    }
    temp=top;
    top=top->next;
    printf("%d item has been successfully Removed \n",temp->data);
    free(temp);
    
    
}

struct Node* display()
{
    struct Node *temp;
     if(top==NULL)
    {
        printf("Stack is Empty !\n");
        return;
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

struct Node* peak()
{
    if(top==NULL)
    {
        printf("Stack is Empty !\n");
        return;
    }
    else
    {
        printf("The Top Element is %d",top->data);
    }
}
int main()
{
    int choice;
    do{
        printf("\n1.Push The Element.\n");
        printf("2.Pop the Element.\n");
        printf("3.Display Stack.\n");
        printf("4.Peak the stack.\n");

        printf("\n Enter the Choice :");
            scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
            break;

            case 2:
                pop();
            break;

            case 3:
                display();
            break;

            case 4:
                peak();
            break;

            case 5:
                printf("Exiting the Program !!\n");
            break;

            default:
                printf("Wrong Input !! \n Enter Again..\n");
        }

    }while(choice!=5);

}