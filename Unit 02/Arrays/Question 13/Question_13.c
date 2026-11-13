//Question 13 : Insert a new number at a particular position within an array.
#include <stdio.h>
int main(){
    int size, num, new_index, new_element;
    printf("What should be the size of array : ");
    scanf("%d", &size);
    int array[size], new_array[size + 1];
    for(int j = 0; j < size + 1; j++){
        new_array[j] = 0;
    }
    printf("How many numbers you want to put in the array (max %d) : ", size);
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Enter the new element : ");
    scanf("%d", &new_element);
    printf("In which position (index 0 to %d) you want to add the new element : ", num);
    scanf("%d", &new_index);
    if(new_index < 0 || new_index > num){
        printf("Error: Invalid index! Position must be between 0 and %d.\n", num);
        return 1;
    }
    for(int i = 0; i < new_index; i++){
        new_array[i] = array[i];
    }
    new_array[new_index] = new_element;
    for(int i = new_index; i < num; i++){
        new_array[i + 1] = array[i];
    }
    printf("\nThe array is now :\n");
    for(int m = 0; m < num + 1; m++){
        printf("%d\n", new_array[m]);
    }
    return 0;
}