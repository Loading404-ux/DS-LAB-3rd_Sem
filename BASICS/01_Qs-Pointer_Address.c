#include<stdio.h>

void compare(int *ptr1,int *ptr2)
{
  if(*ptr1>*ptr2)
  {
    printf("%d is greater than %d\n",*ptr1,*ptr2);
  }
  else if(*ptr1<*ptr2)
  {
    printf("%d is greater than %d\n",*ptr2,*ptr1);
  }
  else
  {
  printf("%d is equal to %d\n",*ptr1,*ptr2);
  }
}

int main()
{
  int num1,num2;
  printf("Enter two numbers to compare: ");
  scanf("%d%d",&num1,&num2);
  compare(&num1,&num2);
  return 0;
}
