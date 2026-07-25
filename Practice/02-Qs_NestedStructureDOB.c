#include <stdio.h>

struct date
{
    short int date;
    short int month;
    int year;
};

struct Student
{
    char name[20];
    int roll;
    struct date DOB;
};

int main()
{
    int n;
    printf("Enter the Number of Student: ");
    scanf("%d", &n);
    struct Student s[n];
    printf("Enter Student Details: \n");


    for (int i = 0; i < n; i++)
    {
        printf("\n-----------------------------------\n");
        printf("Enter the Information of Student %d:\n", i+1);
        printf("\n----------------------------------\n");
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Roll no.: ");
        scanf("%d", &s[i].roll);

        printf("Enter Date of Birth: ");
        scanf("%hd", &s[i].DOB.date);

        printf("Enter Month of Birth: ");
        scanf("%hd", &s[i].DOB.month);

        printf("Enter Year of Birth: ");
        scanf("%d", &s[i].DOB.year);
        printf("\n--------------------------------------\n");
    }

    printf("\nStudent Information\n");
    printf("\n-----------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("Student no.: %d\n",i+1);
        printf("Name: %s\n", s[i].name);

        printf("Roll no.: %d\n", s[i].roll);

        printf("Date of Birth: %hd.%hd.%d", s[i].DOB.date, s[i].DOB.month, s[i].DOB.year);

        printf("\n----------------------------------\n");
    }
    return 0;
}