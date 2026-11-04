#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
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
    else
    {
        newNode->data=x;
        printf("Enter left child of %d ",x);
        newNode->left=createTree();

        printf("Enter right child of %d ",x);
        newNode->right=createTree();

        return newNode;
    }
}
int main()
{
    struct Node *root;
    root=createTree();
    return 0;
}