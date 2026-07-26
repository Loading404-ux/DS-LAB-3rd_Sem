#include<stdio.h>

struct Employee
{
  char name[50];
  char design[50];
  int basic_salary;
  short int hra;
  short int da; 
};

int main()
{
  int n;
  printf("Enter no. of employees: ");
  scanf("%d",&n);
  struct Employee no[n];
  //input using Structure
  for(int i=1;i<=n;i++)
  {
   printf("Enter employee %d information: \n",i);
   scanf(" %[^\n]",no[i].name);
   scanf(" %[^\n]",no[i].design);
   scanf("%d",&no[i].basic_salary);
   scanf("%hd",&no[i].hra);
   scanf("%hd",&no[i].da);
  }
  
  //print statement using Structure
  printf("\nEmployee Information: \n   ");
  for(int i=1;i<=n;i++)
  {
   printf("Name: %s\n",no[i].name);
   printf("Designation: %s\n",no[i].design);
   printf("Basic Salary: %d\n",no[i].basic_salary);
   printf("HRA %%: %hd\n",no[i].hra);
   printf("DA %%: %hd\n",no[i].da);
   int gross_salary=(no[i].basic_salary+((no[i].hra/100)*no[i].basic_salary))+((no[i].da/100)*no[i].basic_salary);
   printf("Gross Salary: %d",gross_salary);
  }
  
  return 0;
}
