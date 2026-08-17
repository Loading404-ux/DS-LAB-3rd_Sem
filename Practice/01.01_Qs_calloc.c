#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the numbers of elements:");
    scanf("%d",&n);

    int *ptr=(int *)calloc(n,sizeof(int));

    if(ptr==NULL){
        printf("\nMemory Allocation failed!!!");
        return 0;
    }


    for(int i=0;i<n;i++){
        printf("Enter element no.-> %d : ",i+1);
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
    ptr=NULL;

    if(ptr==NULL)
        printf("\nMemory is Successfully freed!!!\n");
    else
        printf("\nMemory is not successfully freed!!!\n");
    
    return 0;
}
