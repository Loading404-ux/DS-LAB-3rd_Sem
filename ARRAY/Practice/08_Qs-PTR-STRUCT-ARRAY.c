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

void acceptData(struct Employee *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the Information of Employee no : %d\n\n",i+1);
        printf("Enter the name of the Employee :");
        scanf(" %[^\n]",(ptr+i)->name);

        printf("Enter the ID number of the Employee :");
        scanf("%d",&(ptr+i)->idNo);

        printf("Enter the Salary of the Employee :");
        scanf("%f",&(ptr+i)->salary);

        printf("Enter the City of the Employee :");
        scanf(" %[^\n]",(ptr+i)->addr.city);

        printf("Enter the State of the Employee :");
        scanf(" %[^\n]",(ptr+i)->addr.state);

        printf("Enter the Pin-Code of the Employee :");
        scanf("%d",&(ptr+i)->addr.pin);

    }
}


void displayData(struct Employee *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nEmployee no. -> %d :\n",i+1);
        printf("Name :%s \n",(ptr+i)->name);
        printf("ID :%d \n",(ptr+i)->idNo);
        printf("Salary :%.2f\n",(ptr+i)->salary);
        printf("City : %s \n",(ptr+i)->addr.city);
        printf("State : %s \n",(ptr+i)->addr.state);
        printf("Pin-Code :%d\n",(ptr+i)->addr.pin);
    }
}
int main()
{
    int n;
    printf("Enter the Numbers of Employee :");
    scanf("%d",&n);

    struct Employee emp[n];
    struct Employee *ptr;
    ptr=emp;

    acceptData(ptr,n);
    displayData(ptr,n);
}