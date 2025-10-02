#// simple c program 
/* 
NAME: DAVID GICHUKI
REG: CT100/G/26130/25
DESCRIPTION : a simple mobile data bundles purrchase system using  c .
             for: subscription    cost in kes
                  100mb            50
                  500mb            200
                  1GB              350
			      2GB              600
			      
TASK 3
                  
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
    
    

    return 0;
}
             
