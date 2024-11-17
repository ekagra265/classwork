#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Compute the sum of the cubes of its digits (assuming a 3-digit number)
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder; // Cube each digit
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}