#include<stdio.h>

void displayMatrix(int row,int col,int arr[row][col])
{
    printf("Matrix :\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void SparseMatrixDISPLAY(int row,int col,int arr[row][col])
{
    printf("\n\nRow\tCol\tVlaue\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]!=0)
                printf("%d\t%d\t%d\n",i,j,arr[i][j]);
        }
    }
}

int SparseMatrixCHECK(int row,int col,int arr[row][col])
{
    int zero=0,nonZero=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0)
                zero++;
            else
                nonZero++;
        }
    }

    if(zero>nonZero)
    {
        printf("The entered Matrix is a Sparse Matrix :");
            return 1;
    }
        printf("The Entered Matrix is not a Sparse Matrix.\n");
        return -1;
}

int main()
{
    int row,col;

    printf("Enter the Numbers of Rows :");
        scanf("%d",&row);

    printf("Enter the Numbers of columns:");
        scanf("%d",&col);

    int arr[row][col];

    printf("Enter %d Elements :",row*col);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    displayMatrix(row,col,arr);

    int output=SparseMatrixCHECK(row,col,arr);

    if(output==1)
        SparseMatrixDISPLAY(row,col,arr);
    

    return 0;
}