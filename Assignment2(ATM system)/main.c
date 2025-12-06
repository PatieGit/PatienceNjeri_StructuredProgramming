#include <stdio.h>
#include <stdlib.h>

// Declaring Functions
int login();
void showMenu(int balance);
void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main()
{
    int loginSuccess = login();

    if (loginSuccess == 1) {
        int balance = 5000;    // Starting account balance
        showMenu(balance);
    } else {
        printf("Exiting program...\n");
    }

    return 0;
}

// LOGIN FUNCTION

int login() {
    int storedPIN = 1312;
    int enteredPIN;
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == storedPIN) {
            printf("Login successful!\n");
            return 1;
        } else {
            printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }

    printf("Too many incorrect attempts. Access denied.\n");
    return 0;
}

// MENU FUNCTION

void showMenu(int balance) {
    int choice = 0;

    while (choice != 4) {
        printf("\n===== ATM MENU =====\n");
        printf("1. Balance Inquiry\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = withdraw(balance);
                break;

            case 3:
                balance = deposit(balance);
                break;

            case 4:
                printf("Thank you for using this ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}




void checkBalance(int balance) {
    printf("Your current balance is: %d\n", balance);
}




int deposit(int balance) {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid deposit amount. Deposit must be positive.\n");
        return balance;
    }

    balance += amount;
    printf("Deposit successful. New balance: %d\n", balance);

    return balance;
}




int withdraw(int balance) {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid withdrawal amount. Must be positive.\n");
        return balance;
    }

    if (amount > balance) {
        printf("Insufficient funds. Withdrawal failed.\n");
        return balance;
    }

    balance -= amount;
    printf("Withdrawal successful. New balance: %d\n", balance);

    return balance;
}
