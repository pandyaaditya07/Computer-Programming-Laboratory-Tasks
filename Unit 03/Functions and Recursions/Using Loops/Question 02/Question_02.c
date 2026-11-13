//Question 02 :  Any year is entered through the keyboard. Write a function to determine whether the year is a lear year or not.
#include <stdio.h>
int isLeapYear(int year);
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (isLeapYear(year)){
        printf("%d is a Leap Year.", year);
    }
    else{
        printf("%d is not a Leap Year.", year);
    }
    return 0;
}
int isLeapYear(int year){
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        return 1;
    }
    else{
        return 0;
    }
}