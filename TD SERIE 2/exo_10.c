#include <stdio.h>

enum Days{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){

    enum Days today;
    /*const char days[][] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};*/

    printf("Enter today's number (0-6): ");
    scanf("%d", &today);

    if (today < Sunday || today > Saturday){
        printf("Invalid number! :(");
    }
    else{
        printf("today is: ");
        switch (today){
            case Sunday:
                printf("Sunday\n");
                break;
            case Monday:
                printf("Monday\n");
                break;
            case Tuesday:
                printf("Tuesday\n");
                break;
            case Wednesday:
                printf("Wednesday\n");
                break;
            case Thursday:
                printf("Thursday\n");
                break;
            case Friday:
                printf("Friday\n");
                break;
            case Saturday:
                printf("Saturday\n");
                break;
        }
        if (today == Friday || today == Saturday){
            printf("Happy weekend!\n");
        }
        else{
            printf("Keep going!\n");
        }
    }

    return 0;
}