#include<stdio.h>

struct Complex
{
  float real;
  float img;
};

struct Complex addComplex(struct Complex num1,struct Complex num2)
{
  struct Complex result1;
  result1.real=num1.real+num2.real;
  result1.img=num1.img+num2.img;
  return result1;
}

struct Complex multiComplex(struct Complex *num1,struct Complex *num2,struct Complex *result2)
{
  
  result2->real=(num1->real*num2->real)-(num1->img*num2->img);
  result2->img=(num1->real*num2->img)+(num1->img*num2->real);
}

int main()
{
  struct Complex c1,c2,sum,multi;
  printf("Enter the FIRST Real and Imaginary Number :");
  scanf("%f %f",&c1.real,&c1.img);
  printf("Enter the SECOND Real and Imaginary Number :");
  scanf("%f %f",&c2.real,&c2.img);
  int choice;
  printf("Enter your choice as per following options:\n");
  printf("1 . Addition of two Complex number\n");
  printf("2 . Multiplication of two Complex number\n");
  printf("Enter :");
  scanf("%d",&choice);
  printf("\n---------------\n");
  if(choice==1)
  {
    sum=addComplex(c1,c2);
     	if(sum.img>=0)
     	   printf("Sum: %.2f + %.2fi\n",sum.real,sum.img);
     	else
     	   printf("Sum: %.2f - %.2fi\n",sum.real,(sum.img)*-1);
  }
  else if(choice==2)
  {
	multiComplex(&c1,&c2,&multi);
    	if(multi.img>=0)
     	   printf("Multiplication: %.2f + %.2fi\n",multi.real,multi.img);
     	else
     	   printf("Multiplication: %.2f - %.2fi\n",multi.real,(multi.img)*-1);
  }
  else
  printf("Entered Input is Incorrect.!!!!\n Code Terminated.!!!!!!!");
  return 0;
}
