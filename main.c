#include <stdio.h>
#include <stdlib.h>


///////////////////////////////////////////////
struct curr_date {
    int day, month, year;

};

///////////////////////////////////////////////




///////////////////////////////////////////////
// int start_functions(Curr_date){


// }

///////////////////////////////////////////////
struct curr_date input_date()
{

struct curr_date c_date1;

    int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    while (1) {
        printf("Geben Sie das Jahr ein: ");
        scanf("%i",&c_date1.year);


        if (c_date1.year != 0) {
           // get_days_for_month(c_date1.month,c_date1.year);

            if (is_leapyear(c_date1) == 1) {
              tage_pro_monat[1] = 29;
            }
            break;
        }
    }

    //get_days_for_month(c_date1.month, c_date1.curr_);

    while (1) {
        printf("\nGeben Sie den Monat ein: ");
        scanf("%i",&c_date1.month);

        if (!((c_date1.month < 1) || (c_date1.month > 12))) {
            break;
        }

    }

    while (1) {
        int temp_month;
        printf("\nGeben Sie den Tag ein: ");
        scanf("%i",&c_date1.day);
        temp_month = c_date1.month - 1;

        if (!((c_date1.day < 1) || (c_date1.day > get_days_for_month(c_date1)))) {
            break;
        }

    }
    return c_date1;
}



///////////////////////////////////////////////
int exists_date(struct curr_date c_date1) {
    if ((c_date1.year < 1582)|| (c_date1.year > 2400))
    {
        printf("Date is invalid %i \n",c_date1.year);
        return 1;
    }
    return 0;
}



///////////////////////////////////////////////
int day_of_the_year(struct curr_date c_date1) {
    int counter1 = 0;
    int counter2 = 0;
    int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

     for (int i = 0; i < c_date1.month; i++) {
        counter1 = counter1 + tage_pro_monat[i];
    }

    counter2 = tage_pro_monat[c_date1.month] - c_date1.day;
    counter1 = counter1 + counter2;
    printf("Day of the year: %i \n",counter1);
    return 0;
}





///////////////////////////////////////////////
int is_leapyear(struct curr_date c_date1) {
    if (c_date1.year% 4 == 0 && c_date1.year % 100 != 0 || c_date1.year % 400 == 0) {
        return 1;
    }
    return 0;
}



///////////////////////////////////////////////
int get_days_for_month(struct curr_date c_date1) {
    int counter1 = 0;
    int counter2 = 0;
    int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (is_leapyear(c_date1) == 1) {
        tage_pro_monat[1] = 29;
    }

    return tage_pro_monat[c_date1.month - 1];
}

int main()
{

    //start_functions(day, month,year);

    struct curr_date c_date1;
    c_date1 = input_date();

    printf("%i.%i.%i\n",c_date1.day,c_date1.month,c_date1.year);

    while (exists_date(c_date1) == 1) {
        c_date1 = input_date();
    }

    day_of_the_year(c_date1);

    //get_days_for_month(c_date1.month,c_date1.day);

    return 0;
}

