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

void sparseMatrix(int row,int col,int (*ptr)[col])
{
    printf("Row\tCol\tValue\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(*(*(ptr+i)+j)!=0)
                printf("%d\t%d\t%d\n",i,j,*(*(ptr+i)+j));
        }
    }
}

void checkSparseMatrix(int row,int col,int (*ptr)[col])
{
    int zero=0;
    int nonZero=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(*(*(ptr+i)+j)==0)
                zero++;
            else
                nonZero++;
        }   
    }

    if(zero>nonZero)
        sparseMatrix(row,col,ptr);
    else
        printf("The Inputted Matrix is not a Sparse Matrix.\n");
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

    checkSparseMatrix(row,col,ptr);
}