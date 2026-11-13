//Question 02 : Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not.
#include <stdio.h>
int leapYear(int year);
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (leapYear(year)){
        printf("%d is a Leap Year.", year);
    }
    else{
        printf("%d is not a Leap Year.", year);
    }
    return 0;
}
int leapYear(int year){
    if (year % 400 == 0){
        return 1;
    }
    else if (year % 100 == 0){
        return 0;
    }
    else if (year % 4 == 0){
        return 1;
    }
    else{
        return 0;
    }
}