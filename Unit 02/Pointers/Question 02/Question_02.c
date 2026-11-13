//Question 02 : Sort all the elements of a 4x4 matrix and store the result in a single-dimension array.
#include <stdio.h>
int main(){
    int matrix[4][4], arr[16];
    int i, j, k = 0;
    int temp;
    printf("Enter 16 elements of the matrix:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            arr[k] = matrix[i][j];
            k++;
        }
    }
    for (i = 0; i < 15; i++){
        for (j = 0; j < 15 - i; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted elements in one-dimensional array:\n");
    for (i = 0; i < 16; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}