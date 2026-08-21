#include<stdio.h>

#define N 99

struct Sparse{
    int row[N];
    int col[N];
    int value[N];

};
void displaySparse(struct Sparse n[2],int size)
{

    for(int x=0;x<2;x++)
    {
        printf("\n\nSPARSE MATRIX %d:\n",x);

        printf("\nRow\tCol\tvalue\n\n");
        for(int i=0;i<size;i++)
        {
            printf("%d\t%d\t%d\n",n[x].row[i],n[x].col[i],n[x].value[i]);
        }
    }
}

void addSparse(struct Sparse n[2],int size)
{
    struct Sparse add;
    printf("\nRow\tCol\tvalue\n\n");


    int c=0;
    int i,j;
        for(int i=0;i<size;i++)
        {
            int found=0;

            for(int j=0;j<size;j++)
            {
                if((n[0].row[i]==n[1].row[j]) && (n[0].col[i]==n[1].col[j]))
                {
                    int sum=n[0].value[i]+n[1].value[j];

                    add.row[c]=n[0].row[i];
                    add.col[c]=n[0].col[i];
                    add.value[c]=sum;

                    c++;

                    found=1;
                    break;
                    
                }
              
            }

            if(found==0)
            {
                add.row[c]=n[0].row[i];
                add.col[c]=n[0].col[i];
                add.value[c]=n[0].value[i];

                c++;
            }
        }


        // matrix 2

        for(int i=0;i<size;i++)
        {
            int found=0;

            for(int j=0;j<size;j++)
            {
                if((n[1].row[i]==n[0].row[j]) && (n[1].col[i]==n[0].col[j]))
                {
                    found=1;
                    break;
                }
              
            }

            if(found==0)
            {
                add.row[c]=n[1].row[i];
                add.col[c]=n[1].col[i];
                add.value[c]=n[1].value[i];

                c++;
            }
        }
    


    // finally display
        printf("\nRow\tCol\tvalue\n\n");
    for(int i=0;i<c;i++)
    {
        printf("\n%d\t%d\t%d\n",add.row[i],add.col[i],add.value[i]);
    }

}



int main()
{
    struct Sparse n[2];
    int nonZero;

    printf("Enter the Number of Non Zero Element :");
        scanf("%d",&nonZero);
    
    printf("Enter the Row , Column and Value Respecticely :\n\n");

    for(int x=0;x<2;x++)
    {
        for(int i=0;i<nonZero;i++)
        {
            printf("\n");
            printf("Enter the Row no. of Element -> %d :",i+1);
                scanf("%d",&n[x].row[i]);
            printf("Enter the COlumn no. of Element -> %d :",i+1);
                scanf("%d",&n[x].col[i]);
            printf("Enter the value of Element -> %d :",i+1);
                scanf("%d",&n[x].value[i]);
        }
        
    }

    
        displaySparse(n,nonZero);

        addSparse(n,nonZero);
    


}