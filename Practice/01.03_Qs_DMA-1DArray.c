#include<stdio.h>
#include<stdlib.h>

int findSum(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum=sum+arr[i];

    return sum;
}
int main()
{
    int n;

    printf("Enter the size for Memory Allocation:");
    scanf("%d",&n);

    int *arr=(int *)malloc(n*sizeof(int));


    if(arr==NULL)
    {
        printf("Memory allocation failed!!");
        exit(0);
    }
    // Input data

    for(int i=0;i<n;i++)
        {
            printf("Enter element no. -> %d : ",i+1);
            scanf("%d",&arr[i]);
        }

        int Sum=findSum(arr,n);
        // display

        printf("\nThe Elements are :\n");
    for(int i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }

        printf("\nThe Sum of the Elements are : %d\n",Sum);
        free(arr);
        arr=NULL;
    return 0;
}