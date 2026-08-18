#include<stdio.h>

struct Student{
    int rollNo;
    char name[30];
    float cgpa;
};

void acceptData(struct Student *ptr)
{
    // Input details

    printf("Enter the Roll no. of the student :");
    scanf("%d",&ptr->rollNo);
    printf("Enter the name of the Student :");
    scanf(" %[^\n]",ptr->name);
    printf("Enter the CGPA of the Student :");
    scanf("%f",&ptr->cgpa);
}

void displayData(struct Student *ptr)
{
    printf("\nRoll number: %d\n",ptr->rollNo);
    printf("Name : %s\n",ptr->name);
    printf("CGPA : %.2f\n",ptr->cgpa);
}
int main()
{
    struct Student s;
    struct Student *ptr;

    ptr=&s;

    acceptData(ptr);
    displayData(ptr);
    return 0;
}