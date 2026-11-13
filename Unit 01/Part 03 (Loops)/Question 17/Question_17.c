//Question 17 : Count +ve,-ve and zeroes in 200 values
#include <stdio.h>
int main(){
    int array[200], positive = 0, negative = 0, zeros = 0;
    printf("Enter 200 numbers : \n");
    for (int i = 0; i < 200; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", & array[i]);
    }
    for (int j = 0; j < 200; j++){
        if(array[j] > 0){
            positive++;
        }
        else if(array[j] < 0){
            negative++;
        }
        else{
            zeros++;
        }
    }
    printf("Positive : %d\nNegative : %d\nZero : %d\n", positive, negative, zeros);
    return 0;
}