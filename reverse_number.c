#include <stdio.h>

// Function to reverse a number
int reverseDigits(int num)
{
    int rev_num = 0;

    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }

    return rev_num;
}

int main()
{
    int num = 4562;

    printf("Given number: %d\n", num);
    printf("Reverse of the number: %d", reverseDigits(num));

    return 0;
}
