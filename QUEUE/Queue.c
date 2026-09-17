#include<stdio.h>

// Inputrestricted and output-restricted
// i/p -> rear
// o/p -> front

int arr[999];

int front=-1;
int rear=-1;

int size;


void display()
{
    for(int i=front;i<rear;i++)
        printf("%d\t",arr[i]);
    printf("\n\n");
}
void Enqueue()
{
    

    if(rear-1>size)
    {
        printf("Overflow\n");
    }
    else
    {
        int data;
        printf("Enter the Element :");
        scanf("%d",&data);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            arr[rear]=data;
            rear++;
            printf("Sucessfully Entered the Element !!\n ");
        }
        else
        {
         
            arr[rear]=data;
               rear++;
            printf("Sucessfully Entered the Element !!\n ");
        }
    }


    display();
}

void Dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow!!\n");
    }
    else
    {
        printf("The Deleted element is %d.\n",arr[front]);
        front++;
    }

    display();
}

void Peek()
{
    int pos;
    printf("Enter the Position to Peak :");
        scanf("%d",&pos);

    if(pos>rear || pos<front )
    {
        printf("Wrong Position!!\n");
    }
    else
    {
        printf("The Element present in %d position is : %d",pos,arr[pos]);
    }
}

void isEmpty()
{
    if(front==-1 && rear==-1)
    {
        printf("The Queue is Empty !!\n");
    }
    else
        printf("Queue is NOT Empty !!\n");
}

void isFull()
{
   if(rear>size)
    {
        printf("Queue is FULL\n");
    }
    else
    {
        printf("Queue is NOT Full\n");
    }
}

int main()
{
    printf("Enter the maximum size of Queue :");
        scanf("%d",&size);

    int choice;

    do{
        printf("\n----------------------------------------------\n");
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Peek \n");
        printf("4. isEmpty \n");
        printf("5. isFull \n");
        printf("6. Exit...\n");

        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                Enqueue();
            break;

            case 2:
                Dequeue();
            break;

            case 3:
                Peek();
            break;

            case 4:
                isEmpty();
            break;

            case 5:
                isFull();
            break;

            case 6:
                printf("Exiting the Program !!\n");
            break;

            default:
                printf("Wrong Input !!!\n");
        }


    }while(choice !=6);
}

