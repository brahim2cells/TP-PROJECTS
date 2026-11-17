#include <stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

int main(){

    struct Time time_1, time_2;
    int seconds, minutes, hours;

    //first time
    printf("Enter the first time: \n");
    printf("hour: ");
    scanf("%d", &time_1.hours);
    printf("minute: ");
    scanf("%d", &time_1.minutes);
    printf("second: ");
    scanf("%d", &time_1.seconds);

    //second time
    printf("Enter the second time: \n");
    printf("hour: ");
    scanf("%d", &time_2.hours);
    printf("minute: ");
    scanf("%d", &time_2.minutes);
    printf("second: ");
    scanf("%d", &time_2.seconds);

    seconds = time_1.seconds + time_2.seconds;
    minutes = time_1.minutes + time_2.minutes;
    hours = time_1.hours + time_2.hours;

    if (seconds >= 60){
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
    if (minutes >= 60){
        hours += minutes / 60;
        minutes = minutes % 60;
    }
    if (hours >= 23){
        hours -= 24;
    }

    printf("The total time is: ");
    printf("%02d:%02d:%02d gmt+1 \n", hours,minutes,seconds);

    return 0;
}