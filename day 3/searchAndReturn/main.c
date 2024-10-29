#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4],item;


    for(int i=0; i<4 ; i++)
    {
        printf("Enter Number of index %i\n",i);
        scanf("%i",&arr[i]);
    }
    system("cls");
    printf("enter item to search \n");
    scanf("%i",&item);
    system("cls");
    int j;
    for( j=0;j<4;j++){
        if(arr[j] == item){
                printf("your item in index : %i",j);
            break;
        }
        else {
            printf(" item not found\n");
             break;
        }

    }



    return 0;
}
