#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
   int *ptr;
   printf("Enter the size of Memory allocation:");
   scanf("%d",&n);

   ptr=(int *)malloc(n*sizeof(int));

   if(ptr==NULL){
      printf("Memory Allocation Failed !!!\n");
      return 0;
   }
   
   for(int i=0;i<n;i++){
      printf("Enter the Interger %d : ",i+1);
      scanf("%d",(ptr+i));
   }

   for(int i=0;i<n;i++)
         printf("%d\t",*(ptr+i));

   free(ptr);
   ptr=NULL;

   if(ptr==NULL)
      printf("Memory Allocation Sucessfully Free");
   else
      printf("Memory Alloction is not free");
   return 0;
   

}