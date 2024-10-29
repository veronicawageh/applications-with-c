#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row=3, col=4;
    int arr[row][col],calc[4];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("enter number of index %i %i :\n",i,j);
            scanf("%i",&arr[i][j]);
        }}
        ////////////////////////////////////////////
        system("cls");

        for(int j=0; j<col; j++)
        {
            int sum=0;
            for(int i=0; i<row; i++)
            {

                sum=sum+arr[i][j];
                calc[j]=sum/row;
            }
        }

    ///////////////////////////////print
    for(int i=0; i<4; i++)
    {
        printf("average of column %i is : %i\n",i,calc[i]);
    }
    return 0;
}
