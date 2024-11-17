#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    // Method 1: Using a temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Method 1 (Using temporary variable): a = %d, b = %d\n", a, b);

    
    // Method 2: Using arithmetic (addition and subtraction)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Method 2 (Using arithmetic): a = %d, b = %d\n", a, b);

    

    // Method 3: Using bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Method 3 (Using XOR): a = %d, b = %d\n", a, b);

    

    // Method 4: Using pointers
    int *p1 = &a, *p2 = &b;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("After Method 4 (Using pointers): a = %d, b = %d\n", a, b);

    return 0;
}
