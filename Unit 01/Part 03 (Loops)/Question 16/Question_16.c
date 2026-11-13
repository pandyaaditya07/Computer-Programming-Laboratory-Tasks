//Question 16 : Find out largest and smallest out of 100 nos.
#include <stdio.h>
int main(){
    int array[100], largest, smallest;
    for(int i = 0; i < 100; i++){
        printf("Enter number %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    largest = array[0];
    smallest = array[0];
    for(int j = 1; j < 100; j++){
        if(array[j] > largest){
            largest = array[j];
        }
        if(smallest > array[j]){
            smallest = array[j];
        }
    }
    printf("Results : \nLargest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}