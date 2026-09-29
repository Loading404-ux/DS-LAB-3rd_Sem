#include <stdio.h>
#define MAX 50

char b[MAX];

int createTree()
{
    char x;

    printf("Enter the Data for Root Node : Enter '0' for NO node : ");
    scanf(" %c",&x);

    if (x == '0')
    {
        return;
    }
    b[0] = x;

    for (int i = 0; i < (MAX - 1) / 2; i++)
    {

        if (b[i] != '\0')
        {
            int l = 2 * i + 1;
            int r = 2 * i + 2;

            printf("Enter the Left Child for %c : Enter '0' for NO node : ", b[i]);
            scanf(" %c", &x);
            printf("\n");

            if (x != '0')
            {
                b[l] = x;
            }

            printf("Enter the Right Child for %c : Enter '0' for NO node : ", b[i]);
            scanf(" %c", &x);
            printf("\n");

            if (x != '0')
            {
                b[r] = x;
            }
        }
    }
}
int main()
{
    int c = createTree();

    printf("\nThe Array is :");
    for (int i = 0; i < MAX; i++)
    {
        if (b[i] != '\0')
            printf(" %c", b[i]);
        else
            printf("  ");
    }
}
