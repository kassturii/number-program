#include <stdio.h>

int main() {
    int score;

    printf("Enter marks / percentage (0-100): ");
    if (scanf("%d", &score) != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Step 1: Validate input range
    if (score < 0 || score > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
        return 1;
    }

    // Step 2: Map the score range to discrete integers using division by 10
    switch (score / 10) {
        case 10: // For a perfect 100
        case 9:  // 90 - 99
            printf("Grade: A\n");
            break;

        case 8:  // 80 - 89
            printf("Grade: B\n");
            break;

        case 7:  // 70 - 79
            printf("Grade: C\n");
            break;

        case 6:  // 60 - 69
            printf("Grade: D\n");
            break;

        default: // 0 - 59
            printf("Grade: F (Fail)\n");
            break;
    }

    return 0;
}
