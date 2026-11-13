//Question 32 : Find out how many prime nos. are there between 1 and 500.
#include <stdio.h>
int main(){
    int count = 0, i, n;
    for (n = 1; n <= 500; n++){
        for (i = 2; i < n; i++){
            if(n % i == 0){
                break;
            }
        }
        if (i == n){
            count += 1;
        }
    }
    printf("Total prime numbers between 1 and 500 are : %d\n", count);
    return 0;
}