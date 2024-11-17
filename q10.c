#include <stdio.h>

int main() {
    int rows, i, j, num;

    // Input the number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Print spaces for formatting
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print Pascal's Triangle numbers
        num = 1; // First number in every row is 1
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1); // Update the number
        }

        printf("\n");
    }

    return 0;
}
