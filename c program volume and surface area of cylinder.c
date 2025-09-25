
#//simple c program
/*
NAME:DAVID GICHUKI
REG :CT100/G/26130/25
DESCRIPTION:calculating volume and surface area of cylinder using c program
*/

#include <stdio.h>  
 // include standard input/output library
 
 #define PI 3.14159   // define constant value of pi

int main() {
    // Declare variables for radius, height, volume, and surface area
   
    float radius, height, volume, surfaceArea;

    // Prompt the user to enter the radius
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    // Prompt the user to enter the height
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the volume using formula V = p * r^2 * h
    volume = PI * radius * radius * height;

    // Calculate the surface area using formula SA = 2pr^2 + 2prh
    surfaceArea = (2 * PI * radius * radius) + (2 * PI * radius * height);

    // Display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;  // end of program
    
}

