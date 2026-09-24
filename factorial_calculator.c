#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Used to prevent early overflow

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Error handling for negative input
    if (n < 0) {
        printf("Error: Factorial does not exist for negative numbers.\n");
    } else if (n == 0) {
        // Special case: 0! = 1
        printf("Special Case: 0! = 1\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("The factorial of %d is: %llu\n", n, fact);
    }

    return 0;
}
