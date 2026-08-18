#include<stdio.h>

void acceptElements(int (*ptr)[],int size)
{
    printf("Enter the Elements :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(*ptr+i));
    }

}

void displayElements(int (*ptr)[],int size)
{
    
    for(int i=0;i<size;i++)
    {
        printf("%d\t",*(*ptr+i));
    }
}

int *sortElements(int (*ptr)[],int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(*(*ptr+j)>*(*ptr+j+1))
            {
                temp=*(*ptr+j);
                *(*ptr+j)=*(*ptr+j+1);
                *(*ptr+j+1)=temp;
            }
        }
        
    }

    return ptr;
}
int main()
{
    int n;
    printf("Enter the Size of the Array :");
    scanf("%d",&n);

    int a[n];

    int (*ptr)[n]=&a;

     acceptElements(ptr,n);

     printf("\nThe Elements are :\n");
     displayElements(ptr,n);

     int (*sortPtr)[n]=sortElements(ptr,n);

     printf("\nThe Sorted Elements are:\n");
     displayElements(sortPtr,n);

}