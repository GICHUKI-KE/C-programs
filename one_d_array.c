// Simple C program
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program records and analyzes the hotel’s weekly revenue.
It uses a 1D array to store 7 daily revenues and calculates:
- Total weekly revenue
- Average daily revenue
*/

#include <stdio.h>

int main() {
    printf(" Weekly Revenue Tracker System \n");

    float revenue[7];   // 1D array to store daily revenues
    float total = 0, average;
    int i;

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i]; // add to total
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\nTotal Weekly Revenue = KSh. %.2f\n", total);
    printf("Average Daily Revenue = KSh. %.2f\n", average);

    printf("\nProgram ended successfully.\n");
    return 0;
}