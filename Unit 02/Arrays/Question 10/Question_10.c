//Question 10 : Find out frequency of each number in the array (having 10 elements).
#include <stdio.h>
int main(){
    int array[10];    
    printf("Enter 10 elements : \n");
    for(int i = 0; i < 10; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", &array[i]);
    }    
    printf("\nFrequency of each element:\n");    
    for(int i = 0; i < 10; i++){
        int already_counted = 0;
        for(int j = 0; j < i; j++){
            if(array[i] == array[j]){
                already_counted = 1;
                break;
            }
        }
        if(already_counted == 0){
            int count = 0;
            for(int k = 0; k < 10; k++){
                if(array[i] == array[k]){
                    count++;
                }
            }
            printf("Number %d appears %d time(s)\n", array[i], count);
        }
    }    
    return 0;
}