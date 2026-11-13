/*
Question 06 : Calculate total, average of marks of three subjects. Give following grades to the student.
If average   >= 70, distinction,
              >= 60, first,
              >= 50, second,
              >= 35, third class,
    Otherwise fail.
If student secures < 35 marks in any subject then declare student fail.
*/
#include <stdio.h>
int main(){
    float sub1, sub2, sub3, total, average;
    printf("Enter the marks of following subjects : \n");
    printf("Subject 01 : ");
    scanf("%f", & sub1);
    printf("Subject 02 : ");
    scanf("%f", & sub2);
    printf("Subject 03 : ");
    scanf("%f", & sub3);
    if(sub1 < 0 || sub2 < 0 || sub3 < 0){
        printf("Invalid Input..\n");
        return 1;
    }
    average = (sub1 + sub2 + sub3)/3;
    total = sub1 + sub2 + sub3;
    printf("Average : %.2f\nTotal : %.2f\n", average, total);
    if (sub1 < 35 || sub2 < 35 || sub3 < 35){
        printf("Result : Fail.\n");
        return 1;
    }
    if(average >= 70){
        printf("Result : Distinction.\n");
    }
    else if(average >= 60){
        printf("Result : First class.\n");
    }
    else if(average >= 50){
        printf("Result : Second class.\n");
    }
    else if(average >= 35){
        printf("Result : Third class.\n");
    }
    return 0;
}