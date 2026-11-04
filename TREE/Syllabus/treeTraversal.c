#include<stdio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node *left;
    struct node *right;
};

struct Node* createTree()
{
    char x;
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter the Data - 'Enter '0' for NO data :' ");
        scanf(" %c",&x);

    printf("\n");

    if(x=='0')
    {
        return 0;
    }
    else
    {
        newNode->data=x;

        printf("Enter the Data for LEFT Node of %c:",x);
            newNode->left=createTree();

        printf("Enter the Data for RIGHT Node of %c:",x);
            newNode->right=createTree();

        return newNode;
    }
}

int preOrder(struct Node *root)
{
    if(root == NULL)
        return;
    else
    {
        printf("%c ",root->data);

        preOrder(root->left);
        preOrder(root->right);
    }
}

int postOrder(struct Node *root)
{
    if(root == NULL)
        return;
    else
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%c ",root->data);
    }
}

int inOrder(struct Node *root)
{
    if(root == NULL)
        return;
    else
    {
        inOrder(root->left);
        printf("%c ",root->data);
        inOrder(root->right);
    }
}



int main()
{
    struct Node *root;
    root=createTree();

    printf("\nThe In-Order is :");
        inOrder(root);

    printf("\nThe Pre-Order is :");
        preOrder(root);

    printf("\nThe Post-Order is :");
        postOrder(root);

}

