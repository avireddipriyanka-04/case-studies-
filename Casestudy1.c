#include <stdio.h>

int main() {
    float balance, amount;
    int choice;

    // Read the current account balance
    printf("Enter current account balance: ");
    scanf("%f", &balance);

    // Read the customer's choice
    printf("\n--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Process the choice using switch-case
    switch (choice) {
        case 1:
            // Balance Inquiry
            printf("Current balance: %.2f\n", balance);
            break;

        case 2:
            // Cash Withdrawal
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance -= amount; // Deduct the withdrawal amount
                printf("Transaction successful\n");
                printf("Remaining balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            // Cash Deposit
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            balance += amount; // Add the deposit amount
            printf("Deposit successful\n");
            printf("Updated balance: %.2f\n", balance);
            break;

        default:
            // Invalid Choice
            printf("Invalid option\n");
            break;
    }

    return 0;
}
