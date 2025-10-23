// Simple C program
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program calculates an electricity bill based on units consumed.
For the first 100 units -> KSh 10 per unit
For the next 100 units -> KSh 15 per unit
Above 200 units -> KSh 20 per unit
*/

#include <stdio.h>

// Function to calculate total electricity bill
float calculateElectricBill(int units) {
    float bill; // variable to store the final bill amount

    // Using if-else to check range of units
    if (units <= 100) {
        bill = units * 10; 
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15); 
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20); 
    }

    return bill; // return the calculated amount
}

int main() {
   printf("CALCULATE ELECTRIC BILL \n"); 
	
	int units;

    // Ask user for number of units
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Display the total bill
    printf("Total Bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0; 
}