#include<stdio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node *left;
    struct Node *right;
};

struct Node* createTree()
{
    int x;
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter the Data (Enter -1 for NO data) :");
        scanf("%d",&x);

    if(x==-1)
        return 0;

    
}
int main()
{
    return 0;
}