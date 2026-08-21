#include<stdio.h>

#define N 999
int acceptElements(int *ptr,int size)
{
    printf("\nEnter the Elements in the Array :");
    for(int i=0;i<size;i++)
        scanf("%d",(ptr+i));
}

// Traversal
void traverseElements(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}

// Insert value at Begining of the Array
void insertAtBegining(int a[],int size)
{
    int value;
    printf("\nEnter the Value :");
        scanf("%d",&value);

    for(int i=size-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=value;
    printf("Array after Inserting Element :");
    traverseElements(a,size+1);
}


// Insert Element at the End of the Array
void insertAtEnd(int a[],int size)
{

    int value;
    printf("Enter the Value :");
        scanf("%d",&value);

    a[size]=value;

    printf("Array after Inserting the value at End:");
        traverseElements(a,size+1);
}

void insertAtPosition(int a[],int size)
{
    int value,pos;

    printf("Enter the Value:");
        scanf("%d",&value);

    printf("Enter the Position:");
        scanf("%d",&pos);

    for(int i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }

    a[pos-1]=value;

    printf("Array after Inserting the value at Specific Position:");
        traverseElements(a,size+1);

}

void deleteAtBegining(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        a[i]=a[i+1];
    }

    printf("Array After Deleting Elemnet from Begining:");
    traverseElements(a,size-1);
}

void deleteAtEnd(int a[],int size)
{
    a[size-1]=NULL;

    printf("Array After Deleting Elemnet from End:");
    traverseElements(a,size-1);

}

void deleteAtPosition(int a[],int size)
{
    int pos;
    printf("Enter the Position for Deleting the Element :");
        scanf("%d",&pos);

    for(int i=pos-1;i<size;i++)
    {
        a[i]=a[i+1];
    }

    printf("Array After Deleting Elemnet from Specific Position:");
    traverseElements(a,size-1);
}

void searchElement(int a[],int size)
{
    int value;
    printf("Enter value for Search :");
        scanf("%d",&value);

    int c=-1;
        for(int i=0;i<size;i++)
            {
                if(a[i]==value){
                    c=i;
                    break;
                }   
            }
    
    if(c!=-1)
        printf("Value: %d found at Position: %d",value,c+1);
    else
        printf("Value not found!!\n");
}

void sortArray(int a[],int size)
{
    printf("Unsorted Array :");
        traverseElements(a,size);
    
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {   
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }

    printf("\nSorted Array :");
        traverseElements(a,size);
}

int main()
{
    int size;

    printf("Enter the Size of the Array :");
    scanf("%d",&size);

    int a[N];

    acceptElements(a,size);

    
    printf("\nThe Elements in the Array are:");
    traverseElements(a,size);


    printf("\n========ARRAT MENU========\n");
    // printf("1.Traverse the Array Elements.\n");
    printf("1.Insert the Element at Begining.\n");
    printf("2.Insert the Element at End.\n");
    printf("3.Insert the Element at Specific Position.\n");
    printf("4.Delete the Element at Begining.\n");
    printf("5.Delete the Element at End.\n");
    printf("6.Delete the Element at Specific Position.\n");
    printf("7.Searching the Element.\n");
    printf("8.Sort the Array.\n");

    printf("\n\n");


    int choice;
    printf("Enter Choice:");
        scanf("%d",&choice);


    switch(choice)
    {
        case 1:
            insertAtBegining(a,size);
        break;

        case 2:
            insertAtEnd(a,size);
        break;

        case 3:
            insertAtPosition(a,size);
        break;

        case 4:
            deleteAtBegining(a,size);
        break;

        case 5:
            deleteAtEnd(a,size);
        break;

        case 6:
            deleteAtPosition(a,size);
        break;

        case 7:
            searchElement(a,size);
        break;

        case 8:
            sortArray(a,size);
        break;

        default:
            printf("\nCode Terminated!! Wrong Input!\n");
    }
    
}