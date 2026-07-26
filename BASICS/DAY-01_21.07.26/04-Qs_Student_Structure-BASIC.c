#include<stdio.h>

struct Student
{
 int roll;
 char name[50];
 float cgpa;
};

int main()
{
 struct Student s;
 printf("Enter the Roll number: ");
 scanf("%d",&s.roll);
 printf("Enter the Name: ");
 scanf(" %[^\n]",s.name);
 printf("Enter the CGPA: ");
 scanf("%f",&s.cgpa);
 printf("\nStudent Information\n");
 printf("--------------------------------------------------------\n");
 printf("Roll no.       Name                      CGPA\n");
 printf("--------------------------------------------------------\n");
 printf("%d       %s                %f\n",s.roll,s.name,s.cgpa);
 return 0;
}
