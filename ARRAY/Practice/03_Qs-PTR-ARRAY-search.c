#include<stdio.h>

void acceptElements(int (*ptr)[],int n)
{
    printf("Enter %d elements.\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(*ptr+i));
    }
}

int searchElements(int (*ptr)[],int n,int value)
{
    for(int i=0;i<n;i++)
    {
        if(*(*ptr+i)==value)
            return i+1;
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the size of the Array :");
    scanf("%d",&n);

    int a[n];
    int (*ptr)[n]=&a;

    acceptElements(ptr,n);

    int value;
    printf("Enter the Value to be Searched :");
    scanf("%d",&value);

    int pos=searchElements(ptr,n,value);

    if(pos!=-1)
        printf("Element found !!! Value = %d and Position = %d.",value,pos);
    else
        printf("Element not Found!!!");
}