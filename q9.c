#include <stdio.h>

int main() {
    int rows, i, j;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print the left part
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        // Print the space separator
        printf(" ");

        // Print the right part (same as left)
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
