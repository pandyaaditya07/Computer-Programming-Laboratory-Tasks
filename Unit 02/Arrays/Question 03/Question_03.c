/*
Question 03 : Accept 5 values and sort the array in either ascending or descending order.
Find out different techniques for sorting the array and also find out which one is the best technique.
*/
//Ascending order : 
#include <stdio.h>
int main(){
    int array[5], temp;
    printf("Enter 5 elements for the array : \n");
    for(int i = 0; i < 5; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    for(int n = 0; n < 5; n++){
        for(int j = n + 1; j < 5; j++){
            if (array[n] > array[j]){     //To get in descending order, just change this to (array[n] < array[j])
                temp = array[n];
                array[n] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The array elements : \n");
    for(int k = 0; k < 5; k++){
        printf("%d\n",array[k]);
    }
    return 0;
}