//Question 14 : Calculate sum and mean of any 10 values.
#include <stdio.h>
int main(){
    int numbers[11], sum = 0;
    float mean;
    for(int i = 0; i < 10; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d", & numbers[i]);
    }
    for(int j = 0; j < 10; j++){
        sum += numbers[j];
    }
    mean = (float)sum/10.0;
    printf("Sum : %d\nMean : %.2f\n", sum, mean);
    return 0;
}