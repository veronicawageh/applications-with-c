#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy( int column, int row )
{
    COORD coord;
    coord.X = column;
    coord.Y = row;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
int main()
{
   int size=3;
   int col=size/2 +1;
   int row=1;
    for(int i=1; i<=size*size ; i++)
    {
        gotoxy(col*2,row*2);
        printf("%i\n",i);
        if(i%size!=0)
        {
            col=col-1;
            row=row-1;
            if(col<1)
            {
                col=size;
            }
            if(row<1)
            {
                row=size;
            }
        }
        else
        {
            row++;
        }

    }


    return 0;
}
