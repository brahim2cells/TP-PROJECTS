#include <stdio.h>

enum Months{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};



int main(){

    const char month_name[][11] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    enum Months this_month, next_month;
    int n;

    printf("Enter the number of the month (1-12): ");
    scanf("%d", &n);

    if (n < 1 || n > 12){
        printf("Invalid number!");
    }
    else{
        this_month = n;
        if(n == 12){
            next_month = 1;
        }
        else{
            next_month = n + 1;
        }

        printf("The current month is: %s\n", month_name[this_month - 1]);
        printf("The next month is: %s\n", month_name[next_month -1]);
    }

    return 0;
}

/*        switch (int m){
            case 1;
                printf("January");
                break;
            case 2;
                printf("February");
                break;
            case 3;
                printf("March");
                break;
            case 4;
                printf("April");
                break;
            case 5;
                printf("May");
                break;
            case 6;
                printf("June");
                break;
            case 7;
                printf("July");
                break;
            case 8;
                printf("August");
                break;
            case 9;
                printf("September");
                break;
            case 10;
                printf("Oktober");
                break;
            case 11;
                printf("November");
                break;
            case 12;
                printf("December");
                break;
        }*/
