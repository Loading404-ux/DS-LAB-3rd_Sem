#include<stdio.h>

void Leader(int size,int arr[size])
{
    int leader=arr[size-1];
    printf("%d ",leader);
    for(int i=size-2;i>=0;i--)
    {
        if(arr[i]>leader)
            {
                leader=arr[i];
                printf("%d ",leader);
            }
    }

}

int main()
{
    int size;
    printf("Enter the Size of the Array :");
    scanf("%d",&size);
    int arr[size];

    
    // Array Input
    printf("Enter the Elements in Aray :");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    Leader(size,arr);
    return 0;
}