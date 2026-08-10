#include<stdio.h>

//addElement - Optimized
void addElement(int arr[],int size,int num,int pos)
{
  for(int i=size-1;i>=pos-1;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[pos-1]=num;
  printf("\nThe Elements are:\n");
  for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
}

void deleteElement(int arr[],int size,int pos)
{
  for(int i=pos;i<size;i++)
  {
      arr[i]=arr[i+1]; 
  }
  for(int i=0;i<size-1;i++)
    printf("%d ",arr[i]);
}

void LeanerSearch(int arr[],int size,int search)
{
 int c=0;
 int pos;
 for(int i=0;i<size;i++)
 {
  if(arr[i]==search)
  {
    pos=i;
    c++;
    break;
  }
 }
 if(c!=0)
  printf("Element Found !!! %d at position: %d",search,pos);
  else
  printf("Enter Element is not present!!!\n Code Terminated!!!\n");
  
}


int main()
{
 int size,choice;
 printf("Enter the size of the 1-D Array: ");
 scanf("%d",&size);
 int arr[size];
 printf("Enter the Elements in Array:");
 for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
 printf("Enter your Perference: \n");
 printf("1. Insert a given element in a specific position.\n");
 printf("2. Delete an element from a specific position.\n");
 printf("3. Linear Search an Element.\n");
 printf("Enter: ");
 scanf("%d",&choice);
 if(choice==1)
 {
   int num,pos,newSize;
   newSize=size+1;
   arr[newSize];
   printf("Enter the Element to be Inserted: ");
   scanf("%d",&num);
   printf("Enter the Place where the elemet to be Inserted: ");
   scanf("%d",&pos);
   addElement(arr,newSize,num,pos);
 }
 else
 if(choice==2)
 {
   int item,pos=-1;
   printf("Enter the Element to be Deleted: ");
   scanf("%d",&item);
   for(int i=0;i<size;i++)
    {
     if(arr[i]==item)
     {
     pos=i;
     }
    }
    if(pos!=-1)
    deleteElement(arr,size,pos);
    else
    printf("Enter Element is not present!!!\n Code Terminated!!!\n");
 }
 else
 if(choice==3)
 {
  int search;
  printf("Enter the Element to be Searched: ");
   scanf("%d",&search);
  LeanerSearch(arr,size,search);
 }
 else
 printf("Enter Input is Wrong!!!\n");
}
