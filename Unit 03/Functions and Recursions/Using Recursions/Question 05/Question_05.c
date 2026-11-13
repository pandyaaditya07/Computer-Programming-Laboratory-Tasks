//Question 05 : Write a program that uses a function to update both the maximum and minimum values in an array using call by reference.
#include <stdio.h>
void readArray(int arr[], int n, int i);
void findMaxMin(int arr[], int n, int i, int *max, int *min);
int main(){
    int arr[100];
    int n, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100){
        printf("Invalid array size.");
        return 0;
    }
    printf("Enter array elements:\n");
    readArray(arr, n, 0);
    max = arr[0];
    min = arr[0];
    findMaxMin(arr, n, 1, &max, &min);
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);
    return 0;
}
void readArray(int arr[], int n, int i){
    if (i == n){
        return;
    }
    scanf("%d", &arr[i]);
    readArray(arr, n, i + 1);
}
void findMaxMin(int arr[], int n, int i, int *max, int *min){
    if (i == n){
        return;
    }
    if (arr[i] > *max){
        *max = arr[i];
    }
    if (arr[i] < *min){
        *min = arr[i];
    }
    findMaxMin(arr, n, i + 1, max, min);
}