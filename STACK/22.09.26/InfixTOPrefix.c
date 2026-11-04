// Infix to Prefix Evalution

#include<stdio.h>
#include<string.h>

char str[50];
int top=-1;

void push(char x)
{
    str[top]=x;
    top++;
}

char pop()
{
    char item=str[top];
    top--;
    return item;
}

int priority(char x)
{
    if(x=="^")
        return 3;
    else
    if(x=="*" || x=="/")
        return 2;
    else
    if(x=="+" || x=="-")
        return 1;
    else
        return 0;
}

int main()
{
    int temp1=0;
    char infix[50],pre[50],post[50],rev[50];
    int temp=0;
    int c=0,count=0;
    printf("Enter the String :");
        scanf(" %[^\n]",infix);

    int n=strlen(infix);

    // Reverse
    for(int i=n;i>=0;i--)
    {
        rev[i]=infix[c];
        c++;
    }

    printf("\nReverse :");
        for(int i=0;i<=n;i++)
            printf("%c",rev[i]);

    // reverse infix to Postfix

    for(int i=0;i<=n;i++)
    {
        if(rev[i]=='(')
        {
            while(rev[i]!=')')
            {
                push(rev[i]);
                i++;
                temp++;
            }
             temp1=0;
            while(temp1!=temp)
            {
                char t=pop();

                if(priority(t)==0)
                {
                    post[count]=rev[temp1];
                    temp1++;
                    count++;
                }
            }
             temp1=0;
            while(temp1!=temp)
            {
                char t=pop();
                if(priority(t)==1)
                {
                    post[count]=rev[temp1];
                    temp1++;
                    count++;
                }
            }
             temp1=0;
            while(temp1!=temp)
            {

                char t=pop();
                if(priority(t)==2)
                {
                    post[count]=rev[temp1];
                    temp1++;
                    count++;
                }
            }
             temp1=0;
            while(temp1!=temp)
            {
                char t=pop();
                if(priority(t)==3)
                {
                    post[count]=rev[temp1];
                    temp1++;
                    count++;
                }
            }

        }


    }

    printf("\nReverse :");
        for(int i=0;i<=n;i++)
            printf("%c",post[i]);


}