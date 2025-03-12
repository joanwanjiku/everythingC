/*
 main.c
 Basics

  Created by Joan Ndambiri on 2/17/25.
*/

#include <stdio.h>
#include <math.h>


int mainBasics(int argc, const char * argv[]) {
    
    // insert code here...
    float value, sqrRt;
    printf("Enter a number: ");
    scanf("%f", &value);
    if (value >= 0.0) {
        sqrRt = sqrt(value);
        printf("you've given %f ", value);
        printf(" and the squareRoot is: %f \n",sqrRt);
    }
    
//    formatting
    float studentAYear1 = 4.2;
    float studentAYear2 = 4.5;
    float studentAYear3 = 4.2;
    
    float studentBYear1 = 4.3;
    float studentBYear2 = 4.4;
    float studentBYear3 = 4.7;
    
    float studentCYear1 = 4.3;
    float studentCYear2 = 4.8;
    float studentCYear3 = 4.9;
    /* your code */
    printf("Student name %9s  %9s %9s %1s \n","1stYGrade", "2ndYGrade", "3rdYGrade", "Avg" );
    printf("StudentA %9.2f %9.2f %9.2f %9.2f\n",studentAYear1, studentAYear2, studentAYear3, (studentAYear3 + studentAYear2 + studentAYear1)/3 );
    printf("StudentB %9.2f %9.2f %9.2f %9.2f\n",studentBYear1, studentBYear2, studentBYear3, (studentBYear3 + studentBYear2 + studentBYear1)/3 );
    printf("StudentC %9.2f %9.2f %9.2f %9.2f\n",studentCYear1, studentCYear2, studentCYear3, (studentCYear3 + studentCYear2 + studentCYear1)/3 );

    
//    arrays
    char *daysOfTheWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        int numDyOfWeek = sizeof(daysOfTheWeek) / sizeof(daysOfTheWeek[0]);
        int dayOfTheWeek;
        printf("Enter the day of the week (1-7): ");
        scanf("%d", &dayOfTheWeek);
        for (int i = 0; i < numDyOfWeek; i++) {
            if (i == value) {
                printf("The day of the week is: %s", daysOfTheWeek[i]);
            }
        }

    
//    leap and not
    /* your code */
    int day, month, year;
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    int daysInMonthLeap[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int daysOfTheYear = 0;
    
    
    /* because you may not know the else instruction yet,
       this simple formula will help you to check if a year is a leap year */
        if (year % 400 == 0){
            for (int i = 1; i < month; i++) {
                daysOfTheYear += daysInMonthLeap[i];
            }
            daysOfTheYear += day;
            printf("Day of the year: %d\n", daysOfTheYear);
            printf("%d is a leap year", year);
        }else if (year % 100 == 0){
            for (int i = 1; i < month; i++) {
                daysOfTheYear += daysInMonth[i];
            }
            daysOfTheYear += day;
            printf("Day of the year: %d\n", daysOfTheYear);
            printf("%d is not a leap year", year);
        }else if (year % 4 == 0){
            for (int i = 1; i < month; i++) {
                daysOfTheYear += daysInMonthLeap[i];
            }
            daysOfTheYear += day;
            printf("Day of the year: %d\n", daysOfTheYear);
            printf("%d is a leap year", year);
        }
    /* your code */
    
    
    return 0;
}
