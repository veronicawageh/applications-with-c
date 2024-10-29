#include <stdio.h>
#include <stdlib.h>

int main()
{
int number;
    printf("Enter a number\n ");
    scanf("%d",&number);
    printf(" The Address Of %d is :%i or %x",number,&number,&number);
    return 0;
}
