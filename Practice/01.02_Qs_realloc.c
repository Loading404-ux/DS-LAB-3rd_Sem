#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,n2;
    printf("Enter the size for memory allocation :");
    scanf("%d",&n1);

    int *ptr=(int *)malloc(n1*sizeof(int));

    if(ptr == NULL)
        {
            printf("Memory alloction failed!!!");
            exit(0);
        }
    for(int i=0;i<n1;i++)
        {
            printf("Enter the Element no -> %d : ",i+1);
            scanf("%d",(ptr+i));
        }

    // Display element

    for(int i=0;i<n1;i++)
        printf("%d\t",*(ptr+i));

    printf("\nEnter the new size for Re-memory allocation :");
    scanf("%d",&n2);

    int *reptr=(int *)realloc(ptr,n2*sizeof(int));

    for(int i=0;i<n2;i++)
        {
            printf("Enter the Element no -> %d : ",i+1);
            scanf("%d",(reptr+i));
        }

    for(int i=0;i<n2;i++)
        printf("%d\t",*(reptr+i));
    
        free(ptr);
        free(reptr);

        ptr=NULL;
        reptr=NULL;
    return 0;
}