// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char *s[]={ "gate","clear","arun","trending"
    };

    printf("String 1: %s\n", *s+3);//trending
    printf("String 2: %s\n", *s);//string no-> 0 "gate"
    printf("String 3: %s\n", (*(s+3)+2)); //ending
    return 0;
}