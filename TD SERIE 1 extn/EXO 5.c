#include <stdio.h>

void displaydate(int day,int month,int year){
	printf("%02d/%02d/%02d\n",day,month,year);
}

int isleap(int year){
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int daysinmonth(int month, int year){
	if (month == 2){
		return isleap(year) ? 29 : 28;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11){
		return 30;
	}
	else{
		return 31;
	}
}

void displaynextday(int day,int month,int year){
	day++;
	if (day > daysinmonth(month, year)){
		day = 1;
		if (month == 12){
			month = 1;
			year += 1;
		}
		else{
			month += 1;
		}
	}
	printf("The next day is: ");
	displaydate(day,month,year);
}

bool isvaliddate(int day,int month,int year){
	if (day < 0 || day > daysinmonth(month, year) || month < 1 || month > 12 || year < 1){
		return false;
	}
	else{
		return true;
	}
}

int main(){
    int day,month,year;
	printf("Enter the date: \nDAY: ");scanf("%02d", &day);
	printf("MONTH: ");scanf("%02d", &month);
	printf("YEAR: ");scanf("%04d", &year);
	daysinmonth(month,year);

	if (!isvaliddate(day,month,year)){
		printf("Enter a valid date!");
		return 1;
	}
	
	displaydate(day,month,year);
	displaynextday(day,month,year);
	return 0;
}
