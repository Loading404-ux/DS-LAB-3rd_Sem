#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

// Create a new Node
 

void insertAtPosition(int value,int pos)
{
    struct Node *newNode,*temp;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    if(pos==1)
    {
        newNode->next=head;
        head=newNode;
    }
    else
    {
        temp=head;

        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}



int main()
{
 
    return 0;
}

