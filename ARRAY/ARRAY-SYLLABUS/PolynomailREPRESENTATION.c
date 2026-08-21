#include<stdio.h>

struct poly{
    int coeff;
    int expo;
};

int acceptEquaction(struct poly eq[],int size)
{
    if(size<0)
    {
        printf("Invailed Power of the Equaction\n\n");
        return 0;
    }
    printf("Enter the Coffecient from higher order to lower :\n");
    for(int i=size-1;i>=0;i--)
    {

        printf("Enter the Coefficient for %d Exponent:",i);
        scanf("%d",&eq[i].coeff);
        eq[i].expo=i;
    }
    printf("Equaction :");
        displayEquaction(eq,size);
    
    return 1;

}

void displayEquaction(struct poly eq[],int size)
{
    
    
        for(int i=size-1;i>=0;i--)
        {
            if(i==0)
                printf("%d ",eq[i].coeff,eq[i].expo);
            else
                printf("%dx^%d + ",eq[i].coeff,eq[i].expo);
        }
}

int main()
{
    int n;
    printf("Enter the Highest Degree of the Polynomial Equaction:");
        scanf("%d",&n);

    struct poly eq[n];

    acceptEquaction(eq,n);
    
    return 0;
}