// simple c program
/*
Name : David Gichuki
Reg : CT100/G/26130/25
Description  : bank atm
*/

#include <stdio.h>

int main() {
    float balance = 7000, withdraw;



    // Keep looping while there is money in the account
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;  // Subtract withdrawal from balance

        if (balance > 0) {
            printf("Remaining balance: %.2f\n", balance);
        } else {
            printf("Insufficient funds! Your account balance is now %.2f\n", balance);
        }
    }

    printf("\nTransaction ended.\n");
    return 0;
}