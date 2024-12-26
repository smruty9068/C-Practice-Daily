
#include <stdio.h>

int is_leap(int year);
int is_leap(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day, year;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the day (1-31): ");
    scanf("%d", &day);

    printf("Enter the year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12 || day < 1 || day > daysInMonths[month]) {
        printf("Enter valid input.");
        return 0;
    }

    if (is_leap(year)) {
        daysInMonths[2] = 29;
    }

    int dayNumber = 0;
    for (int i = 1; i < month; i++) {
        dayNumber += daysInMonths[i];
    }
    dayNumber += day;
    printf("Day number for given input is: %d", dayNumber);
}
