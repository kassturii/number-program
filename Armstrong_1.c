#include <stdio.h>
#include <math.h>

int main()
{
    int i, num, temp, digit, digits, sum;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (i = 1; i <= 1000; i++) {
        num = i;
        temp = num;
        digits = 0;
        sum = 0;

        // Count the number of digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate the sum of powers of digits
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Check whether the number is Armstrong
        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
