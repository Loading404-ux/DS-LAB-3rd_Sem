#include <stdio.h>

struct Address
{
    char house_no[20];
    char city[20];
    int pin;
};

struct Employee
{
    char name[20];
    int emp_code;
    struct Address addr;
};

int main()
{
    struct Employee e1;
    printf("Enter Employee Details: \n");
    printf("Enter name: ");
    scanf(" %[^\n]", e1.name);

    printf("Enter Employee code no.: ");
    scanf("%d",  &e1.emp_code);

    printf("Enter Hosue no.: ");
    scanf(" %[^\n]", e1.addr.house_no);

    printf("Enter City: ");
    scanf(" %[^\n]", e1.addr.city);

    printf("Enter Pin Code: ");
    scanf("%d", &e1.addr.pin);

    printf("\n Employee Information\n");
    printf("\n-----------------\n");

    printf("Name: %s\n", e1.name);

    printf("Employee Code no.: %d\n", e1.emp_code);

    printf("House Number: %s\n", e1.addr.house_no);

    printf("City: %s\n", e1.addr.city );

    printf("Pin Code: %d\n",e1.addr.pin);

    return 0;
}