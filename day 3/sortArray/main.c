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
    for(int i=0; i<10; i++)
    {

        for(int j=0; j<10-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int box=0;
                box=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=box;
            }
        }


    }
    for(int i=0; i<10 ; i++)
    {
        printf(" %i",arr[i]);

    }
    return 0;
}
