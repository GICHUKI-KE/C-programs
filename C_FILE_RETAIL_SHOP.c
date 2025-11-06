//Retail Shop Daily Sales
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program reads all sales amounts from "sales.txt"
and calculates the total daily sales.
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;

    file = fopen("sales.txt", "r"); // open file for reading

    if (file == NULL) {
        printf("Error: sales.txt not found!\n");
        return 1;
    }

    // Read and sum each amount
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    printf("\nTotal Sales for the Day: Ksh %.2f\n", total);

    fclose(file); // Ensure file is closed
    return 0;
}