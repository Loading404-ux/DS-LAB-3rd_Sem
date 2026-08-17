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
  
  int multiPoly[maxX];
  
  for(int i=0;i<=maxX;i++)
  {
    multiPoly[i]=poly1[i]*poly2[i];
  }
  printf("Resultant Polynomial :\n");
  for(int i=maxX;i>=0;i--)
  {
    if(i==0)
    printf("%dx^%d",multiPoly[i],i*i);
    else
    printf("%dx^%d+",multiPoly[i],i*i);
  }
  return 0;
}
