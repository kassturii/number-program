#include <stdio.h>

int main() {
    int num = 1234;
    int reversed = 0;

    // Runs as long as digits remain to process
    while (num > 0) {
        int last_digit = num % 10;
        reversed = reversed * 10 + last_digit;
        num = num / 10; // Update: strips the last digit
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}
