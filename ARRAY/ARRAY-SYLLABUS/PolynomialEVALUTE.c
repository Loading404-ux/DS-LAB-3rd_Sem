#include<stdio.h>
#include<math.h> 

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

void evaluteEquaction(struct poly eq[],int size)
{
    int x;
    float com=0.0;
    printf("\n\nEnter the Value of x:");
        scanf("%d",&x);

    for(int i=size-1;i>=0;i--)
    {
        com=com+eq[i].coeff*(pow(x,eq[i].expo));
    }

    printf("P(x)= ");
        displayEquaction(eq,size);

    printf("\nP(%d)= %.1f",x,com);

}
int main()
{
    int size;
    printf("Enter the Highest Degree of the Polynomial Equaction:");
        scanf("%d",&size);

    struct poly eq[size];

    acceptEquaction(eq,size);
    
    evaluteEquaction(eq,size);
    return 0;
}