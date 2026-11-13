//Question 16 : Delete a value from a particular position within an array.
#include <stdio.h>
int main(){
    int size, index;
    printf("What should be the size of the array : ");
    scanf("%d", & size);
    int array[size], new_array[size-1];
    for(int i = 0; i < size - 1; i++){
        new_array[i]= 0;
    }
    printf("The array is created successfully.\n");
    for(int j = 0; j < size; j++){
        printf("Enter element %d : ", j + 1);
        scanf("%d", & array[j]);
    }
    printf("Entered %d elements into the array successfully.\n", size);
    printf("Enter the index (from 0 to %d) which you want to remove an element from : ", size - 1);
    scanf("%d", & index);
    for(int n = 0; n < size; n++){
        new_array[n] = array[n];
    }
    for(int m = index; m < size - 1; m++){
        new_array[m] = array[m + 1];
    }
    for(int k = 0; k < size - 1; k++){
        printf("%d\n", new_array[k]);
    }
    return 0;
}