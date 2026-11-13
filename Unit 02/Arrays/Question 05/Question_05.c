//Question 05 :	Add two 2D array of same size and store the result in the 3rd one.
#include <stdio.h>
int main(){
    int array_1[2][2] = {{1,2},{3,4}}, array_2[2][2] = {{5,6},{7,8}},array_3[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array_3[i][j] = array_1[i][j] + array_2[i][j];
        }
    }
    for(int k = 0; k < 2; k++){
        for(int n = 0; n < 2; n++){
            printf("%d\n", array_3[k][n]);
        }
    }
    return 0;
}