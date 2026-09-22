#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Play Game\n");
        printf("2. Settings\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Starting game...\n");
                break;
            case 2:
                printf("Opening settings...\n");
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid selection. Try again.\n");
        }
    } while (choice != 3); // Repeats until the user chooses to exit

    return 0;
}
