#include<stdio.h>

// 1-D Array address calculation
int main()
{
    int BA,size,index,lb,ub;
    printf("Enter the Range of the array Lower Bound: ");
    scanf("%d",&lb);
    printf("Enter the Range of the array Upper Bound :");
    scanf("%d",&ub);
    printf("Enter the Base Address of the Array: " );
    scanf("%d",&BA);
    printf("Enter the size of the Data Type in Byte:");
    scanf("%d",&size);

    // find
    printf("Enter the Index for finding the Address :");
    scanf("%d",&index);

    int output=BA+size*(index-lb);

    printf("Array[%d.......%d]\n",lb,ub);
    printf("Base address:%d\n",BA);
    printf("W/Size: %d\n",size);
    printf("Array[%d] address: %d \n",index,output);
}