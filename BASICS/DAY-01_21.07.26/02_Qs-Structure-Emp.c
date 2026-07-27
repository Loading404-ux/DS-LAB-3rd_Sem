#include<stdio.h>

struct Employee
{
  char name[20];
  char design[20];
  int basic_salary;
   int hra;
   int da; 
};

int main()
{
  int n;
  printf("Enter no. of employees: ");
  scanf("%d",&n);
  struct Employee no[n];
  //input using Structure
  for(int i=0;i<n;i++)
  {
   printf("Enter employee %d information: \n",i+1);
   scanf(" %[^\n]",no[i].name);
   scanf(" %[^\n]",no[i].design);
   scanf("%d",&no[i].basic_salary);
   scanf("%d",&no[i].hra);
   scanf("%d",&no[i].da);
  }
  
  //print statement using Structure
  printf("\nEmployee Information: \n");
  for(int i=0;i<n;i++)
  {
   printf("Name: %s\n",no[i].name);
   printf("Designation: %s\n",no[i].design);
   printf("Basic Salary: %d\n",no[i].basic_salary);
   printf("HRA %%: %d\n",no[i].hra);
   printf("DA %%: %d\n",no[i].da);
   int benefit=((no[i].hra*no[i].basic_salary)/100)+((no[i].da*no[i].basic_salary)/100);
   printf("Gross Salary: %d\n\n",(no[i].basic_salary+benefit));
  }
  
  return 0;
}
