#include<stdio.h>

struct Student
{
 int roll;
 char name[50];
 float cgpa;
};

int main()
{
 int n;
 printf("Enter the numbers of Student: ");
 scanf("%d",&n);
 struct Student s[n];
 for(int i=0;i<n;i++)
 {
    printf("--------------------------------------------------------\n");
    printf("Enter the Details for Student no: %d\n",i+1);
    printf("--------------------------------------------------------\n");
    printf("Enter the Roll number: ");
    scanf("%d",&s[i].roll);
    printf("Enter the Name: ");
    scanf(" %[^\n]",s[i].name);
    printf("Enter the CGPA: ");
    scanf("%f",&s[i].cgpa);
 }
 printf("\nStudent Information\n");
 printf("--------------------------------------------------------\n");
 printf("Roll no.       Name                      CGPA\n");
 printf("--------------------------------------------------------\n");
 for(int i=0;i<n;i++)
 {
 printf("%d       %s                %f\n",s[i].roll,s[i].name,s[i].cgpa);
 printf("--------------------------------------------------------\n");
 }
 return 0;
}
