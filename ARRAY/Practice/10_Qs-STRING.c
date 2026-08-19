#include<stdio.h>
#include <string.h>

int main()
{
    char name[20];
    char str[10];

    // Input string

    // printf("Enter String using scanf():");
    // scanf(" %[^\n]",name);

    printf("Enter String Using fgets():");
    fgets(str,sizeof(str),stdin);

    // display string 

    printf("The String 1:%s\n",name);
    printf("The String 2: %.5s\n",name);

    puts(str);
}