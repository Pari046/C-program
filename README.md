/*Write a program to take input of two numbers and print their sum, product and difference */
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", b);
    int sum = a + b;
    int product = a * b;
    int difference = a - b;
    printf("Sum: %d\n", sum);
    printf("Product: %.d\n", product);
    printf("Difference: %.d\n", difference);
    return 0;
}
