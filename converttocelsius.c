// Simple C program
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program converts temperature from Fahrenheit to Celsius.
Formula: C = (F - 32) * 5/9
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius; // to store result
    celsius = (fahrenheit - 32) * 5.0 / 9.0; 
    return celsius; // return temperature in Celsius
}

int main() {
   
   printf("CONVERT TO CELSIUS()\n");
    float f;

    // Ask user to enter Fahrenheit value
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    // Display result in Celsius
    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(f));
    return 0; 
}