#include<stdio.h>
#define MAX 50

char b[MAX];

int createTree(int c)
{
    
    char x;

    printf("Enter the Data : Enter '0' for NO node :");
        scanf(" %c",&x);

        printf("\n");

    if(x == '0')
        return;
    else
    {
        b[c]=x;
        

        printf("Enter the Left Child for %c :\n",x);
        createTree(2*c+1);

        printf("Enter the Right Child for %c :\n",x);
        createTree(2*c+2);
        
    }
}

int main()
{
    int c=createTree(0);

    printf("\nThe Array is :");
    for(int i=0;i<MAX;i++)
    {
        if(b[i]!='\0')
            printf(" %c",b[i]);
        else
            printf("  ");
    }
}