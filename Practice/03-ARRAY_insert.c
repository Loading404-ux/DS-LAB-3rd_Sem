#include <stdio.h>

void insertElement(int size,int arr[],int pos,int value)
{
    // swaping value 
    for(int i=size-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[pos]=value;  //Inserting element in postion "pos"

    // print-display Element

    for(int i=0;i<size+1;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[999];
    int size;
    printf("Enter the size of the Array:");
    scanf("%d", &size);
    printf("Enter the Elements in the Array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int value, pos;
    printf("Enter the value to be Inserted:");
    scanf("%d", &value);

    // menu based program
    printf("Enter your Preference:\n");
    printf("1.Insert at Begining.\n");
    printf("2.Insert at End.\n");
    printf("3.Insert at any position.\n");

    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        pos = 1;
        break;

    case 2:
        pos = size+1;
        break;

    case 3:
        printf("Enter the Position:");
        scanf("%d",&pos);
        break;
    default:
        printf("Wrong Input\n");
    }

    // function calling
    insertElement(size, arr, pos-1, value);
    return 0;
}