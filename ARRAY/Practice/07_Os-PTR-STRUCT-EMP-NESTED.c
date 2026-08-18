#include<stdio.h>

struct Address{
    char city[20];
    char state[20];
    int pin;
};
struct Employee{
    char name[30];
    int idNo;
    float salary;
    struct Address addr;
};

void acceptData(struct Employee *ptr)
{
    printf("Enter the name of the Employee :");
    scanf(" %[^\n]",ptr->name);

    printf("Enter the ID number of the Employee :");
    scanf("%d",&ptr->idNo);

    printf("Enter the Salary of the Employee :");
    scanf("%f",&ptr->salary);

    printf("Enter the City of the Employee :");
    scanf(" %[^\n]",ptr->addr.city);

    printf("Enter the State of the Employee :");
    scanf(" %[^\n]",ptr->addr.state);

    printf("Enter the Pin-Code of the Employee :");
    scanf("%d",&ptr->addr.pin);
}


void displayData(struct Employee *ptr)
{
    printf("Name :%s \n",ptr->name);
    printf("ID :%d \n",ptr->idNo);
    printf("Salary :%.2f\n",ptr->salary);
    printf("City : %s \n",ptr->addr.city);
    printf("State : %s \n",ptr->addr.state);
    printf("Pin-Code :%d\n",ptr->addr.pin);
}
int main()
{
    struct Employee emp;
    struct Employee *ptr;
    ptr=&emp;

    acceptData(ptr);
    displayData(ptr);
}