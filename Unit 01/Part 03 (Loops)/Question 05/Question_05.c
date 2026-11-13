// Question 05 : Print first n odd numbers.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    printf("The first %d odd numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", 2 * i - 1);
    }
    return 0;
}