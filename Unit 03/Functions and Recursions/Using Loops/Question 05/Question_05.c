//Question 05 : Write a program that uses a function to update both the maximum and minimum values in an array using call by reference.
#include <stdio.h>
void findMaxMin(int arr[], int n, int *max, int *min);
int main(){
    int arr[100];
    int n, i;
    int max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100){
        printf("Invalid array size.");
        return 0;
    }
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    findMaxMin(arr, n, &max, &min);
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);
    return 0;
}
void findMaxMin(int arr[], int n, int *max, int *min){
    int i;
    *max = arr[0];
    *min = arr[0];
    for (i = 1; i < n; i++){
        if (arr[i] > *max){
            *max = arr[i];
        }
        if (arr[i] < *min){
            *min = arr[i];
        }
    }
}