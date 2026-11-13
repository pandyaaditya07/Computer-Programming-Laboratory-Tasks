// Question 35 : Print the following series.
#include <stdio.h>
int main(){
    printf("Pattern : D\n");
    for(int i = 5; i >= 3; i--){
        for(int j = 1; j <= 2; j++){
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}