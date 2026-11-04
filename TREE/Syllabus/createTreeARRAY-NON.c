#include<stdio.h>
#define MAX 50

char b[MAX];

void createTree()
{
    int i=0;
    char x;

    printf("Enter the Root Data :");
        scanf(" %c",&x);

    if(x=='0')
        return;

    b[0]=x;

    while(i < MAX)
    {

         if(b[i] == '\0')
        {
            i++;
            continue;
        }
        
        printf("Enter Left Child of %c :",b[i]);
            scanf(" %c",&x);

        if(x !='0')
            b[2*i+1]=x;

        printf("Enter Right Child of %c :",b[i]);
            scanf(" %c",&x);
        
        if(x !='0')
            b[2*i+2]=x;

        i++;
    }
}

int main()
{
    createTree();

    printf("\nThe Array is :");
    for(int i=0;i<MAX;i++)
    {
        if(b[i]!='\0')
            printf(" %c",b[i]);
        else
            printf("  ");
    }
}