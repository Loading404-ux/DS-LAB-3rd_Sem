#include<stdio.h>

int SecondLargest(int arr[],int size)
{
    int firstLarge=arr[0],secondLarge;
        for(int i=1;i<size;i++)
        {
            if(arr[i]>firstLarge)
            {
                secondLarge=firstLarge;
                firstLarge=arr[i];
            }
        }
    return secondLarge;
}
int main()
{
    int size;
    printf("Enter the Size of the Array :");
    scanf("%d",&size);
    int arr[size];
    int checkSize=sizeof(arr)/sizeof(arr[0]);

    if(checkSize<=0){
        printf("The Size is not compatible for the Array.");
        return 0;
    }

    // Array Input
    printf("Enter the Elements in Aray :");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    int output=SecondLargest(arr,size);

        printf("The second Largest Elements in this Array is :%d\n",output);
    return 0;
}