//Question 35 : Print the following series.
#include <stdio.h>
int main(){
    printf("Pattern : A\n");
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 3; j++){
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}