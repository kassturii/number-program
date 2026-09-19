#include <stdio.h>

// Function to calculate base raised to exp
int power(int base, int exp)
{
    int result = 1;

    while (exp--)
        result *= base;

    return result;
}

// Function to count the number of digits
int countDigits(int num)
{
    int count = 0;

    while (num != 0) {
        count++;
        num /= 10;
    }

    return count;
}

// Function to check whether a number is Armstrong
int isArmstrong(int num)
{
    int original = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += power(digit, digits);
        num /= 10;
    }

    return sum == original;
}

int main()
{
    int low = 100, high = 500;

    printf("Armstrong numbers between %d and %d are:\n",
           low, high);

    for (int i = low; i <= high; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}
