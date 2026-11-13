//Question 15 : Calculate sum and mean of any n values.
#include <stdio.h>
int main(){
    int number_of_values;
    printf("Enter how many values you want : ");
    scanf("%d", & number_of_values);
    int array[number_of_values], sum = 0;
    float mean;
    for(int i = 0; i < number_of_values; i++){
        printf("Enter number %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    for(int j = 0; j < number_of_values; j++){
        sum += array[j];
    }
    mean = (float)sum / number_of_values;
    printf("Sum = %d\nMean : %.2f\n", sum, mean);
}