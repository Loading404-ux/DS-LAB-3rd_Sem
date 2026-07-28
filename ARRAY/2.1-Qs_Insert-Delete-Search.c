#include<stdio.h>

void addElement(int arr[],int temp,int item,int place)
{
  int t1=temp;
  for(int i=0;i<temp;i++)
  {
   if(i>=place)
   {
     arr[t1]=arr[t1-1];
     t1--;
   }
  }
  arr[place]=item;
  for(int i=0;i<temp;i++)
    printf("%d ",arr[i]);
}

void deleteElement(int arr[],int size,int item,int pos)
{
  for(int i=0;i<size;i++)
  {
    if(i>=pos)
    {
      arr[i]=arr[i+1]; 
    }
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
   int item,place,temp;
   temp=size+1;
   arr[temp];
   printf("Enter the Element to be Inserted: ");
   scanf("%d",&item);
   printf("Enter the Place where the elemet to be Inserted: ");
   scanf("%d",&place);
   place=place-1;
   addElement(arr,temp,item,place);
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
    deleteElement(arr,size,item,pos);
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