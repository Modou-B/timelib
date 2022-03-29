/**
 *
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 **/
int day_of_the_year(int day, int month, int year)
{

    return 0;
}



int main()
{
    int curr_day;
    int curr_month;
    int curr_year;
    int counter1 = 0;
    int counter2 = 0;
    //int current_year_of_programming;
    int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};


    //current_year_of_programming = 2022;

    while (1) {
        printf("Geben Sie das Jahr ein: ");
        scanf("%i",&curr_year);

        if (curr_year != 0) {
            break;
        }
        //curr_day = 2020;
        //if (!((curr_year < current_year_of_programming) || (curr_year > current_year_of_programming))){
        //  break;
        //}
    }
    // irgendwas an der Bedingung darunter ist noch falsch (Geht btw auch nicht w�hrung meine Current_year_of_programming aktiv ist)
    if (curr_year % 4 == 0 && curr_year % 100 != 0 || curr_year % 400 == 0) {
        tage_pro_monat[0] = 29;
    }

    while (1) {
        printf("\nGeben Sie den Monat ein: ");
        scanf("%i",&curr_month);
        //curr_month = 3;
        if (!((curr_month < 1) || (curr_month > 12))) {
            break;
        }
    }


    while (1) {
        printf("\nGeben Sie den Tag ein: ");
        scanf("%i",&curr_day);
        //curr_day = 15;
        if (!((curr_day < 1) || (curr_day > tage_pro_monat[curr_month - 1]))) {
            break;
        }
    }



    for (int i = 1; i < curr_month; i++) {
        counter1 = counter1 + tage_pro_monat[i];


    }

    counter2 = tage_pro_monat[curr_month] - curr_day;
    counter1 = counter1 + counter2;
    printf("%i",counter1);

    return 0;
}
