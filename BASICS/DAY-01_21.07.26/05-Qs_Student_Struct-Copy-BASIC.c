#include<stdio.h>

struct Student
{
 int roll;
 char name[50];
 float cgpa;
};

int main()
{
 struct Student s1,s2;
 printf("Enter the Roll number: ");
 scanf("%d",&s1.roll);
 printf("Enter the Name: ");
 scanf(" %[^\n]",s1.name);
 printf("Enter the CGPA: ");
 scanf("%f",&s1.cgpa);
 s2=s1;
 printf("\nStudent Information\n");
 printf("--------------------------------------------------------\n");
 printf("Roll no.       Name                      CGPA\n");
 printf("--------------------------------------------------------\n");
 printf("%d       %s                %f\n",s2.roll,s2.name,s2.cgpa);
 return 0;
}
