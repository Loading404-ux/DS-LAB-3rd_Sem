#include<stdio.h>
#include<string.h>

int main()
{
    int choice;
    printf("Enter Your choice :");
    scanf("%d",&choice);
    char str[50];
    char source[50];
    char destination[50];
    char s1[50];
    char s2[50];
    char s3[50];
    switch(choice)
    {
        case 1:
            printf("Enter a String:");
            scanf(" %[^\n]",str);


            // length
            int len=strlen(str);

            printf("The Length of the String is :%d",len);
        
        break;

    // strcpy()
        case 2:
            

            printf("\n\nEnter a Source String:");
            scanf(" %[^\n]",source);

            strcpy(destination,source);

            printf("This is a destination String :%s\n\n",destination);

        break;

    // strcat
        case 3:
            printf("Enter string s1 :");
            scanf(" %[^\n]",s1);

            printf("Enter string s2 :");
            scanf(" %[^\n]",s2);

            strcat(s1,s2);

            printf("Concatenated String : %s\n",s1);
        break;
    // strcmp ->return 0 ->equal || return -1 -> unequal

        case 4:
            printf("Enter string s1 :");
            scanf(" %[^\n]",s1);

            printf("Enter string s2 :");
            scanf(" %[^\n]",s2);

            printf("Enter string s3 :");
            scanf(" %[^\n]",s3);

            if(strcmp(s1,s2)==0)
                printf("String s1 and s2 are equal.\n");
            else
                printf("String s1 and s2 are not equal.\n");

            if(strcmp(s2,s3)==0)
                printf("String s2 and s3 are equal.\n");
            else
                printf("String s2 and s3 are not equal.\n");
            
        break;

        case 5:
            
        break;

    }



}