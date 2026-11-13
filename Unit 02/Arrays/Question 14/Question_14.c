//Question 14 : Insert a new number at a last position within an array.
#include <stdio.h>
int main(){
    int size, new_number, num;
    printf("What should be the size of array : ");
    scanf("%d", & size);
    int array[size], new_array[size+1];
    for (int k = 0; k < size + 1; k++){
        new_array[k] = 0;
    }
    printf("Made an array of size %d.\n", size);
    printf("Enter %d elements : \n", size);
    for (int i = 0; i < size; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    printf("Enter the new number which you want to add at last : ");
    scanf("%d", & new_number);
    for(int j = 0; j < size; j++){
        new_array[j] = array[j];
    }
    new_array[size] = new_number;
    printf("%d has been added successfully to the array.\n", new_number);
    for(int n = 0; n < size + 1; n++){
        printf("%d\n", new_array[n]);
    }
    return 0;
}