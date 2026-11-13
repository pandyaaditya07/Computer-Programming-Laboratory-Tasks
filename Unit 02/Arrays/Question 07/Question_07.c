/*
Question 07 : Obtain transpose of a 4x4 matrix. The transpose of a matrix is obtained by exchanging the elements 
of each row with the elements of the corresponding column.
*/
#include <stdio.h>
int main(){
    int matrix[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    }, transposed_matrix[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            transposed_matrix[i][j] = matrix[j][i];
        }
    }
    for(int k = 0; k < 4; k++){
        for(int n = 0; n < 4; n++){
            printf("%d ",transposed_matrix[k][n]);
        }
        printf("\n");
    }
    return 0;
}