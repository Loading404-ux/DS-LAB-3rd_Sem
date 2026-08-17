#include<stdio.h>

void addPoly(int poly1[],int poly2[],int maxX)
{
  int add[maxX];
  
  for(int i=0;i<=maxX;i++)
  {
    add[i]=poly1[i]+poly2[i];
  }
  for(int i=maxX;i>=0;i--)
  {
    if(i==0)
    printf("%dx^%d ",add[i],i);
    else
    printf("%dx^%d + ",add[i],i);
  }
}
int main()
{
  int maxX;
  printf("Enter maximum degree of x:");
  scanf("%d",&maxX);
  int poly1[maxX];
  int poly2[maxX];
  printf("Enter Polynomial from lowest to highest degree:\n");
  printf("Enter Polynomial-1:");
  for(int i=0;i<=maxX;i++)
  {
    scanf("%d",&poly1[i]);
  }
  printf("\nEnter Polynomial-2:");
  for(int i=0;i<=maxX;i++)
  {
    scanf("%d",&poly2[i]);
  }
  
  add(poly1,poly2,maxX);
  return 0;
}
