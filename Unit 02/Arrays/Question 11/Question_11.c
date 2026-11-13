//Question 11 : Shift all nos. by given n positions within an array of 10 elements either on left side or right side. Pad the remaining position with 0.
#include <stdio.h>
#include <string.h>
int main(){
    int array[10], shifted_array[10] = {0};
    int n;
    char direction[10];
    printf("Enter the 10 elements of the array : \n");
    for(int i = 0; i < 10; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &array[i]);
    }
    getchar();
    printf("Which direction you want to shift the position (left/right) : ");
    fgets(direction, sizeof(direction), stdin);
    direction[strcspn(direction, "\n")] = 0;
    printf("How many positions you want to shift : ");
    scanf("%d", &n);
    if (strcasecmp(direction, "right") == 0) {
        for(int i = 0; i < 10; i++) {
            int new_index = i + n;
            if (new_index < 10) {
                shifted_array[new_index] = array[i];
            }
        }
    }
    else if (strcasecmp(direction, "left") == 0) {
        for(int i = 0; i < 10; i++) {
            int new_index = i - n;
            if (new_index >= 0) {
                shifted_array[new_index] = array[i];
            }
        }
    } 
    else {
        printf("Invalid direction entered!\n");
        return 1;
    }
    printf("\nArray after shifting %s by %d position(s):\n", direction, n);
    for(int k = 0; k < 10; k++){
        printf("%d ", shifted_array[k]);
    }
    printf("\n");
    return 0;
}