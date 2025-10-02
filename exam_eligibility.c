#// simple c program
/*
Name : DAVID GICHUKI
REG:CT100/G/26130/25
Description: exam eligibility c program
*/
  
  #include <stdio.h>

int main() {
    float attendance, marks;

    // user enters attendance
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

	// user enters marks
    printf("Enter average marks: ");
    scanf("%f", &marks);

    // check eligibility from users details
    if (attendance >= 75 && marks >= 40) {
        printf("Eligible for final exam.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
} 