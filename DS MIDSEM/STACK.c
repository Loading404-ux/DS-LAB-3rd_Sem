#include<stdio.h>

int top=-1;

void push(int stack[],int n)
{
    if(top==n-1)
    {
        printf("Overflow\n");
    }
    else
    {
        int data;
        printf("Enter the Data to be Pushed :");
            scanf("%d",&data);
        top++;
        stack[top]=data;
        printf("%d item Pushed Successfully \n",stack[top]);
    }
}

void pop(int stack[])
{
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        int item=stack[top];
        top--;
        printf("%d item has been successfully Removed \n",item);
    }
}

void display(int stack[])
{
    if(top==-1)
    {
        printf("Stack is Empty !\n Nothing ! to display\n");

    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void peak(int stack[])
{
    if(top==-1)
    {
        printf("Stack is Empty !\n Nothing ! to display\n");

    }
    else
    {
        printf("The Top Element is %d",stack[top]);
    }
}

int main()
{
    int n;
    printf("Enter the Size of the Stack :");
    scanf("%d",&n);

    int stack[n];

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
                push(stack,n);
            break;

            case 2:
                pop(stack);
            break;

            case 3:
                display(stack);
            break;

            case 4:
                peak(stack);
            break;

            case 5:
                printf("Exiting the Program !!\n");
            break;

            default:
                printf("Wrong Input !! \n Enter Again..\n");
        }

    }while(choice!=5);

}