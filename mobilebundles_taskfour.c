#// simple c program 
/*
NAME : DAVID GICHUKI
REG : CT100/G/26130/25
DESCRIPTION : task 4 , continuation of task 3 adding of (invalid option) if user 
               enters a number that is not in the range of 1-4 
               
*/

#include <stdio.h>

int main() {
    int choice;

    // displaying menu for offers and their cost
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    // requesting user choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // deciding which choice the user has put
    if (choice == 1) {
        printf("You selected 100MB. Cost = 50 KES\n");
    } 
    else if (choice == 2) {
        printf("You selected 500MB. Cost = 200 KES\n");
    } 
    else if (choice == 3) {
        printf("You selected 1GB. Cost = 350 KES\n");
    } 
    else if (choice == 4) {
        printf("You selected 2GB. Cost = 600 KES\n");
    } 
    else {
        printf("Invalid choice.\n"); // Task 4 condition
    }
  
   return 0;
}
             
