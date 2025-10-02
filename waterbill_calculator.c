#// c program waterbill calculator
/*
NAME : DAVID GICHUKI
REG : CT100/G/26130/25
DESCRIPTION :designing water bill calculator using if/else statements.
 for 0-30 units= kes20/unit
             31-60units=kes 25/ unit
             above60units=kes 30/unit
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Ask the user to enter units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Using if-else to caculate the bill
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    // Print bill with two decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}