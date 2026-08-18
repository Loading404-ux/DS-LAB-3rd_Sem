#include<stdio.h>

void acceptMatrix(int row,int col,int (*ptr)[col])
{
    printf("Enter %d Elements :",row*col );

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",(*(ptr + i)+j));
        }
    }
}

void displayMatrix(int row,int col,int (*ptr)[col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",*(*(ptr +i)+j));
        }
        printf("\n");
    }
}
int main()
{
    int row,col;
    printf("Enter the no. of Rows :");
    scanf("%d",&row);
    printf("Enter the no. of Column :");
    scanf("%d",&col);

    int arr[row][col];

    int (*ptr)[col];

     acceptMatrix(row,col,ptr);

    displayMatrix(row,col,ptr);
}