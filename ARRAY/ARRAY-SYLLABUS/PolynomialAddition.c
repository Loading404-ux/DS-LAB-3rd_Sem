#include<stdio.h>
#include<math.h> 

// to be donw by me LATER 

// later work status pending
#define N 999
struct poly{
    int coeff;
    int expo;
};

struct Mpoly{
    struct poly eq[N];
};

int acceptEquaction(struct Mpoly Meq[],int size)
{
    int count=1;
    if(size<0)
    {
        printf("Invailed Power of the Equaction\n\n");
        return 0;
    }
    printf("Enter the Coffecient from higher order to lower :\n");
    for(int i=size-1;i>=0;i--)
    {

        printf("Enter the Coefficient for %d Exponent:",i);
        scanf("%d",&Meq[count].eq[i].coeff);
        Meq[count].eq[i].expo=i;
    }
    printf("Equaction :");
        displayEquaction(Meq[count].eq,size);
    
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

    struct Mpoly Meq[size];
    acceptEquaction(Meq,size);

    int choice;
    printf("Enter Your Choice :");
        scanf("%d",&choice);
    
    printf("\n==========POLYNOMIAL MENU==========\n");
    printf("1.Evalute Polynomial Equaction.\n");
    printf("2.Addtion of Polynomial\n");

    switch(choice)
    {
        case 1:
            evaluteEquaction(Meq,size);
        break;

        case 2:
            addPolynomial(Meq,size);
        break;

        default:
            printf("Wrong Input !!! Code Terminatted\n");
    }
    
    return 0;
}