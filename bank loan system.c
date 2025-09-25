#//c program 
/*
NAME : DAVID GICHUKI
REG : CT100/G/26130/25
Description: Bank loan system using c program
*/

#include <stdio.h>  
 // include standard input/output library

int main() {
    // Declare variables for age and income
    int age;
    float income;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for annual income
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check conditions:
    // Customer must be 21 years or older AND income must be at least 21000
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}