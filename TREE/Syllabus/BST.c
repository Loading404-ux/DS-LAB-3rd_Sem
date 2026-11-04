#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createTree(int value)
{
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));

    if(newNode==NULL)
    {
        printf("Memory allocation falied\n");
        exit(0);
    }
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

struct Node* insert(struct Node *root,int value)
{
    if(root==NULL)
    {
        return createTree(value);
        return;
    }

    if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else
    if(value>root->data)
    {
        root->right=insert(root->right,value);
    }

    return root;
}

struct Node* inorder(struct Node *root)
{
    if(root==NULL)
        return;
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }

}

struct Node* preorder(struct Node *root)
{
    if(root==NULL)
        return;
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

struct Node* postorder(struct Node *root)
{
    if(root==NULL)
        return;
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}


int main()
{
    struct Node *root=NULL;
    int value,n=0;

    do{
        printf("Enter the Total Number of Nodes :");
            scanf("%d",&n);

        if(n<1)
            printf("Wrong Input !! Out of Bound !!\n Enter Again :\n");

    }while(n<1);

    for(int i=1;i<=n;i++)
    {
        printf("Enter the Value :");
            scanf("%d",&value);


         // if its the first Node 
        if(root==NULL)
        {
            root=insert(root,value);
        }
        else
        {
            insert(root,value);
        }
    }   

    printf("\nInorder Traversal of the Tree is  :");
    inorder(root);
    printf("\nPreoder Traversal of the Tree is  :");
        preorder(root);
    printf("\nPostorder Traversal of the Tree is  :");
        postorder(root);

}

