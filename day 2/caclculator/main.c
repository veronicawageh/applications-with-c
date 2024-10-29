#include <stdio.h>
#include <stdlib.h>

int main()
{
    char oper, answer;
    int num1, num2;
    do
    {
        printf("enter number 1\n");
        scanf("%i",&num1);
        _flushall();

        printf("enter number 2\n");
        scanf("%i",&num2);
        _flushall();

        do
        {
            printf("enter type of operation\n");
            scanf("%c",&oper);
            _flushall();
        }
        while(oper != '+' && oper != '-' && oper != '/' && oper != '*');

        switch (oper)
        {

        case '+':
            printf("the summation of %i and %i is : %i\n",num1,num2,num1+num2);
            break;

        case '-':
            printf("the subtraction of %i and %i is : %i\n",num1,num2,num1-num2);
            break;

        case  '*':
            printf("the multiplication of %i and %i is : %i\n",num1,num2,num1*num2);
            break;
        case  '/':
            printf("the divination of %i and %i is : %i\n",num1,num2,num1/num2);
            break;
        default:
            printf("wrong operation");

        }
        printf("do you want to contnuie??\n");
        scanf("%c",&answer);
        _flushall();
    }
    while(answer == 'y' || answer== 'Y' );

    return 0;
}
