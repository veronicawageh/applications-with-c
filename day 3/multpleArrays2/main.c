#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3]={0}, arr2[3][2]={0} ,calc[3][2]={0};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter number of index %i %i in first array :\n",i,j);
            scanf("%i",&arr[i][j]);
        }}
        system("cls");
        ////////////////////////////////////////////


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("enter number of index %i %i in second array :\n",i,j);
            scanf("%i",&arr2[i][j]);
        }}
        system("cls");
        ////////////////////////////////////////////
        for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                calc[i][j]+=arr[i][k]*arr2[k][j] ;
            }
        }
    }
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%i ",calc[i][j]);
    }
    printf("\n");
}
    return 0;
}
