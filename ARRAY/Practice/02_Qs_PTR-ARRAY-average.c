#include<stdio.h>

void acceptElements(float (*ptr)[],int n)
{
    printf("Enter %d no of Elements.\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter Element no %d :",i+1);
        scanf("%f",(*ptr+i));
    }
}

float findAverage(float (*ptr)[],int n)
{
    float sum=0.0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(*ptr+i);
    }
    float avg=sum/n;

    return avg;
}
int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    float a[n];

    float (*ptr)[5]=&a;

    acceptElements(ptr,n);

    float avg=findAverage(ptr,n);

    printf("The Average of the 1D Array is : %.2f",avg);
}