//Question 31 : Find out summation of prime nos. between 1 & 500.
#include <stdio.h>
int main(){
    int sum = 0;
    for(int n = 1; n <= 500; n++){
        if (n <= 1) {
            continue; 
        }
        int is_prime = 1;
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1){
            sum += n;
        }
    }
    printf("The summation of prime numbers between 1 to 500 = %d\n", sum);
    return 0;
}
