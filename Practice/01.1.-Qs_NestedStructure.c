#include <stdio.h>

struct Address
{
    char house_no[20];
    char city[20];
    int pin;
};

struct Student
{
    char name[20];
    int roll;
    struct Address addr;
};

int main()
{
    struct Student s1;
    printf("Enter Student Details: \n");
    printf("Enter name: ");
    scanf(" %[^\n]", s1.name);

    printf("Enter Roll no.: ");
    scanf("%d", &s1.roll);

    printf("Enter Hosue no.: ");
    scanf(" %[^\n]", s1.addr.house_no);

    printf("Enter City: ");
    scanf(" %[^\n]", s1.addr.city);

    printf("Enter Pin Code: ");
    scanf("%d", s1.addr.pin);

    printf("\nStudent Information\n");
    printf("\n-----------------\n");

    printf("Name: %s\n", s1.name);

    printf("Roll no.: %d\n", s1.roll);

    printf("House Number: %s\n", s1.addr.house_no);

    printf("City: %s\n",s1.addr.city );

    printf("Pin Code: %d\n",s1.addr.pin);

    return 0;
}