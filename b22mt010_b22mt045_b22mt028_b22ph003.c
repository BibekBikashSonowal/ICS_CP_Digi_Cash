#include <stdio.h>

int main() {
    int Pin = 1234;
    double accountBalance = 5000.0;
    int pin,choice;
    double amount;
    int t = 1;
    while (t == 1) {
        printf("Welcome to the ATM\n");
        printf("\nEnter your PIN: ");
        scanf("%d", &pin);

        if (pin == Pin) {
            printf("\nATM PIN is correct.\n");
            printf("Choose an operation:\n");
            printf("1. Balance Checking\t\t");
            printf("2. Cash Withdrawal\n");
            printf("3. Cash Deposition\t\t");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Your account balance: ₹%.2f\n", accountBalance);
                    t = 1;
                    break;
                case 2:
                    printf("Enter the amount to withdraw: ₹");
                    scanf("%lf", &amount);
                    if (amount > 0 && amount <= accountBalance) {
                        accountBalance -= amount;
                        printf("Cash withdrawn: ₹%.2f\n", amount);
                    } 
                    else 
                        printf("Invalid amount or insufficient balance.\n");
                    t = 1;
                    break;
                case 3:
                    printf("Enter the amount to deposit: ₹");
                    scanf("%lf", &amount);
                    if (amount > 0) {
                        accountBalance += amount;
                        printf("Cash deposited: ₹%.2f\n", amount);
                    } 
                    else
                        printf("Invalid amount.\n");
                    t = 1;
                    break;
                case 4:
                    printf("\nExiting the ATM.\nThank you!\n");
                    t = 0;
                    break;
                default:
                    printf("Invalid choice. Please select a valid option.\n");
            }
        } 
        else
            printf("Incorrect ATM PIN. Please try again.\n");
    }

    return 0;
}
