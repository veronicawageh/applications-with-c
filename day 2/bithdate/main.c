#include <stdio.h>
#include <stdlib.h>



int main()
{
    int cruentYear=2024;
    int cruentMonth=10;
    int cruentDay=28;
    int personYear, personMonth, personDay , maxDays ,year , days , month;

    do
    {
        printf("PLEASE , enter year from 1980 to 2024\n");
        scanf("%i",&personYear);

    }
    while( personYear<1980 || personYear>2024 );


    do
    {
        printf("PLEASE , enter month between 1 to 12\n");
        scanf("%i",&personMonth);
    }
    while( personMonth<1 || personMonth>12 );

if( personMonth == 4 || personMonth == 6 || personMonth == 9 || personMonth == 11 )
        {
            maxDays=30;
        }
        else if( personMonth == 1 || personMonth == 5 || personMonth == 7 || personMonth == 8 || personMonth == 12 ||  personMonth == 3 )
        {
            maxDays=31;
        }
        else if(personMonth == 2)
        {
            if (personYear%4 == 0)
            {
                maxDays=29;
            }
            else{maxDays=28;}
        }
    do
    {

        printf("PLEASE , enter day from 1 to 31\n");
        scanf("%i",&personDay);
        }

    while( personDay<1 || personDay>maxDays);

    if(cruentDay<personDay)
    {
        cruentDay = cruentDay + maxDays;
        cruentMonth = cruentMonth -1 ;
    }
    days = cruentDay -  personDay ;




    if(cruentMonth < personMonth)
    {
        cruentMonth =  cruentMonth + 12;
        cruentYear = cruentYear -1;
    }
    month =cruentMonth -  personMonth;
    year = cruentYear -personYear;

    printf("%i y , %i m , %i d", year,month,days);
    return 0;
}
