//Question 18 :	Find out how many boys and girls are there in a class of 50 students. Input sex code.
#include <stdio.h>
int main(){
    int boys = 0, girls = 0;
    char array[50];
    printf("Give the gender of the 50 students, on the basis of their roll numbers : \n");
    for (int i = 0; i < 50; i++){
        printf("Enter the gender of roll number %d (M/F) : ", i+1);
        scanf(" %c", & array[i]);
    }
    for (int j = 0; j < 50; j++){
        if(array[j] == 'm' || array[j] == 'M'){
            boys++;
        }
        else if(array[j] == 'f' || array[j] == 'F'){
            girls++;
        }
        else{
            printf("Invalid gender for roll number %d. \n", j+1);
        }
    }
    printf("Total boys : %d\nGirls : %d\n", boys, girls);
    return 0;
}