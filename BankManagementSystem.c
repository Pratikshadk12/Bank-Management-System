/* Bank Management System — C version (single account, minimal) */
#include <stdio.h> // Standard I/O library
#include <string.h> // String manipulation library

struct BankAccount { // Structure to hold bank account details
    int accountNumber; 
    char name[50];
    float balance;
};

void displayMenu() { // Function to display the menu options
    printf("\n------ BANK MENU ------\n");
    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
}

void printBalance(struct BankAccount acc) { // Function to print the current balance of the account
    printf("Current balance for %s (A/C %d): %.2f\n", acc.name, acc.accountNumber, acc.balance); 
    // This is a C-style string literal of type char[39] used as a format string for functions like printf. 
    // It is designed to display a message showing the current balance for a user, 
    // including their name (%s), account number (%d), and balance (%.2f) with two decimal places.
}

void deposit(struct BankAccount *acc, float amount) { // Function to deposit an amount into the account
    acc->balance += amount;
    printf("Deposit successful. +%.2f\n", amount); 
}

int withdraw(struct BankAccount *acc, float amount) { // Function to withdraw an amount from the account
    if (amount > acc->balance) return 0;
    acc->balance -= amount;
    return 1;
}

int main() { // Main function to run the bank management system
    struct BankAccount acc;
    int choice;
    float amount;

    printf("===== Simple Bank Management System (C) =====\n\n");

    printf("Enter Name: ");
    fgets(acc.name, sizeof(acc.name), stdin); // Read name input from user
    // remove trailing newline if present
    acc.name[strcspn(acc.name, "\n")] = '\0'; // This removes the newline character from the string if it exists.
    // The strcspn function computes the length of the initial segment of the string _Str that consists entirely of characters not found in the string _Control. 
    // It returns this length as a size_t value, and the function uses the __cdecl calling convention.

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNumber);

    do {
        printf("Enter Initial Balance (>= 0): ");
        scanf("%f", &acc.balance);
        if (acc.balance < 0) printf("Initial balance cannot be negative. Try again.\n");
    } while (acc.balance < 0);

    printBalance(acc);

    while (1) {
        displayMenu();
        printf("Enter your choice (1-4): ");
        if (scanf("%d", &choice) != 1) {
            // basic recovery for invalid input
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid input. Try again.\n");
            continue;
        }

        if (choice == 1) {
            printf("Enter deposit amount (> 0): ");
            scanf("%f", &amount);
            if (amount <= 0) printf("Amount must be greater than 0.\n");
            else { deposit(&acc, amount); printBalance(acc); }
        } else if (choice == 2) {
            printf("Enter withdrawal amount (> 0): ");
            scanf("%f", &amount);
            if (amount <= 0) printf("Amount must be greater than 0.\n");
            else if (withdraw(&acc, amount)) { 
                printf("Withdrawal successful.\n"); 
                printBalance(acc);
            } else {
                printf("Insufficient funds. Withdrawal cancelled.\n");
                printBalance(acc);
            }
        } else if (choice == 3) {
            printBalance(acc);
        } else if (choice == 4) {
            printf("Thank you for banking with us!\n");
            break;
        } else {
            printf("Invalid choice. Please select 1-4.\n");
        }
    }

    return 0;
}
