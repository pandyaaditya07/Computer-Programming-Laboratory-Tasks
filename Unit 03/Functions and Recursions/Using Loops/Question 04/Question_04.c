//Question 04 :  Write a function to swap two integers using call by value. Show that the original values are not changed.
#include <stdio.h>
void swap(int a, int b);
int main(){
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("\nAfter function call:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nInside swap function:\n");
    printf("a = %d, b = %d\n", a, b);
}