#include <stdio.h>
#include <stdlib.h>

int main()
{int Firstrow=3, firstcol=2 , secRow=2 , secCol=1;
    int arr[3][2]={0}, arr2[2][1]={0} ,calc[3][1]={0};

    for(int i=0; i<Firstrow; i++)
    {
        for(int j=0; j<firstcol; j++)
        {
            printf("enter number of index %i %i in first array :\n",i,j);
            scanf("%i",&arr[i][j]);
        }}
        system("cls");
        ////////////////////////////////////////////


    for(int i=0; i<secRow; i++)
    {
        for(int j=0; j<secCol; j++)
        {
            printf("enter number of index %i %i in second array :\n",i,j);
            scanf("%i",&arr2[i][j]);
        }}
        system("cls");
        ////////////////////////////////////////////

    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            for(int k=0;k<2;k++){
                calc[i][j]+=arr[i][k]*arr2[k][j] ;
            }
        }
    }
for(int i=0;i<3;i++){
    for(int j=0;j<1;j++){
        printf("%i \n",calc[i][j]);
    }
}
    return 0;
}
