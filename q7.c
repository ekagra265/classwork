#include <stdio.h>
#include <math.h>

// Function to convert Binary to Decimal
void binaryToDecimal() {
    int binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal Equivalent: %d\n", decimal);
}

// Function to convert Decimal to Binary
void decimalToBinary() {
    int decimal, binary = 0, base = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        rem = decimal % 2;
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary Equivalent: %d\n", binary);
}

// Main function
int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        binaryToDecimal();
    } else if (choice == 2) {
        decimalToBinary();
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
