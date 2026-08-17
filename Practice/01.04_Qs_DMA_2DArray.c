#include<stdio.h>
#include<stdlib.h>

void displayMatrix(int **matrix,int rows,int cols)
{
    printf("\nThe Elements are :\n");
    for(int i=0;i<rows;i++)
   {
        for(int j=0;j<cols;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose(int **matrix,int rows,int cols)
{
    printf("\nThe Transpose of the Matrix is: \n");
    for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                printf("%d\t",matrix[j][i]);
            }
            printf("\n");
        }
}
int main()
{
    int rows,cols;
    printf("Enter the Numbers of rows:");
    scanf("%d",&rows);
    printf("Enter the numbers of Columns:");
    scanf("%d",&cols);

    int **matrix=(int **)malloc(rows * sizeof(int *));

    for(int i=0;i<rows;i++)
        matrix[i]=(int *)malloc(cols *sizeof(int));

    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<cols;j++)
    //     {
    //         if(matrix[i][j]==NULL)
    //         {
    //             printf("Memory Allocation Failed!!");
    //             return 0;
    //         }
    //     }
    // } -> this process is not checking the Memory Allocation is DONE or not

    // Input Data
    printf("\nEnter the Elements :\n");
    for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        } 
    
    displayMatrix(matrix, rows, cols);

    // transpose Matrix

    transpose(matrix,rows,cols);

    free(matrix);
    matrix=NULL;
}