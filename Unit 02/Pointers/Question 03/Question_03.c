//Question 03 : Print the largest and smallest numbers from a 3x3 matrix using pointer.
#include <stdio.h>
int main(){
    int matrix[3][3];
    int *ptr;
    int i, j;
    int largest, smallest;
    printf("Enter 9 elements of the matrix:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    ptr = &matrix[0][0];
    largest = *ptr;
    smallest = *ptr;
    for (i = 1; i < 9; i++){
        if (*(ptr + i) > largest){
            largest = *(ptr + i);
        }

        if (*(ptr + i) < smallest){
            smallest = *(ptr + i);
        }
    }
    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);
    return 0;
}