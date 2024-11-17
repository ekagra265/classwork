#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Subtract b from a using bitwise operators
    b = ~b + 1; // Take 2's complement of b (equivalent to -b)
    int result = a + b; // Add the 2's complement of b to a

    // Print the result
    printf("Result of subtraction is: %d\n", result);

    return 0;
}