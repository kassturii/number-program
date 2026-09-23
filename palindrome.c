#include <stdio.h>

int main() {
    int num, original, remainder;
    int reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (num < 0) {
        printf("%d is NOT a palindrome.\n", num);
        return 0;
    }

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is NOT a palindrome.\n", original);
    }

    return 0;
}
