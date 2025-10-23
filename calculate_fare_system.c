// Simple C program
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program calculates total fare using the rate KSh 50 per kilometer.
*/

#include <stdio.h>

// Function to calculate fare
float calculateFare(float distance) {
    float fare; // to store the fare amount
    fare = distance * 50; // fare rate is 50 per km
    return fare; 
}

int main() {
    printf(" FARE CALCULATING SYSTEM \n");
	float distance;

    // Ask user for distance traveled
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    // Display total fare
    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0; 
}