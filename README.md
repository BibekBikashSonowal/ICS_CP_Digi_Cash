# ICS_CP_Digi_Cash
We first initialize the Balance amount and 4 digit pin code.

We use a while loop to repeat.

We take four digit atm pin input from user,if initialize pin equal to the input pin we get the four choice.

1. Balance Checking             2. Cash Withdrawal
3. Cash Deposition              4. Exit

We uses a switch statement to perform different actions based on the users choice.

Option 1 for Balance check, it displays the account balance. 

Option 2 for Cash Withdrawal.
We take input as a "amount" for withdrawal.
Here if else statement if "amount" is grater than 0 or less than equal to Balance. If that statement is True then we update account Balance to "account Balance - amount" and  display the amount. 
If it is False it display "Invalid amount or insufficient balance".

Option 3 for Cash Deposition
We take input as a "amount" for Cash Deposition.
Here if else statement if "amount" is grater then 0". If that statement is True then we update account Balance to "account Balance + amount" and display the amount.
If it is False it display  "Invalid amount".

Option 4 for Exit we update t = 0, which is help to exit from while loop
And display "Exiting the ATM. Thank you!".

if initialize pin is not equal to the input pin it display "Incorrect ATM PIN. Please try again".
