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
    int qualify;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for annual income
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check conditions:
    // Customer must be 21 years or older AND income must be at least 21000
    qualify = (age >= 21) * 
     (income >=21000);

 // using qualifying value to choose message
        printf("\n results : \n ");
   printf("%s\n", qualify ? " congratulations! you qualify for a loan." :
    
    " unfortunately , we are unable to offer you aloan at this time.");
  return 0;
}
