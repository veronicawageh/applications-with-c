#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];


    for(int i=0; i<10 ; i++)
    {
        printf("Enter Number of index %i\n",i);
        scanf("%i",&arr[i]);
    }
    system("cls");
    int min=arr[0];
    int max=arr[0];
    for(int i=0; i<10 ; i++)
    {
        if(arr[i+1] <min)
        {
            min=arr[i+1];
        }
        if(arr[i+1]> max)
        {
            max=arr[i+1];
        }

    }
    printf("minimum is %i \n",min);
    printf("maxmum is %i ",max);
    return 0;
}
