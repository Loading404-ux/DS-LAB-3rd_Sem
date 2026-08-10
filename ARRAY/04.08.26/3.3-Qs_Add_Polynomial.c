#include<stdio.h>


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
  
  int addPoly[maxX];
  
  for(int i=0;i<=maxX;i++)
  {
    addPoly[i]=poly1[i]+poly2[i];
  }
  for(int i=maxX;i>=0;i--)
  {
    if(i==0)
    printf("%dx^%d",addPoly[i],i);
    else
    printf("%dx^%d+",addPoly[i],i);
  }
  return 0;
}
