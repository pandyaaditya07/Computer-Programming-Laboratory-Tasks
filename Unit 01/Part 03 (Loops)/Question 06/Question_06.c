// Question 06 : Print first n even numbers.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    printf("The first %d even numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", 2*i);
    }
    return 0;
}