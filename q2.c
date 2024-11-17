#include <stdio.h>

int main() {
    int num1, num2, hcf;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF using the iterative method
    for (hcf = (num1 < num2 ? num1 : num2); hcf > 0; hcf--) {
        if (num1 % hcf == 0 && num2 % hcf == 0) {
            break;
        }
    }

    // Print the HCF
    printf("HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}
