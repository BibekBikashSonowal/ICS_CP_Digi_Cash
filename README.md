# ICS_CP_Digi_Cash
We first initialize the balance amount and a 4-digit PIN code.

We use a while loop to repeat.

We take a four-digit ATM PIN input from the user. If the initialized PIN is equal to the input PIN, we present four choices:

1. Balance Checking             2. Cash Withdrawal
3. Cash Deposition              4. Exit

We use a switch statement to perform different actions based on the user's choice.

Option 1 is for Balance check, and it displays the account balance.

Option 2 is for Cash Withdrawal. 

We take input as an "amount" for withdrawal. Here, an if-else statement checks if the "amount" is greater than 0 and less than or equal to the balance. If true, we update the account balance to "account balance - amount" and display the withdrawn amount. If false, it displays "Invalid amount or insufficient balance."

Option 3 is for Cash Deposition. We take input as an "amount" for Cash Deposition. Here, an if-else statement checks if the "amount" is greater than 0. If true, we update the account balance to "account balance + amount" and display the deposited amount. If false, it displays "Invalid amount."

Option 4 is for Exit. We update t = 0, which helps exit from the while loop, and display "Exiting the ATM. Thank you!"

If the initialized PIN is not equal to the input PIN, it displays "Incorrect ATM PIN. Please try again."
