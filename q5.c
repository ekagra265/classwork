#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and calculate their sum
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}
