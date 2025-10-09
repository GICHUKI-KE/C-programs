// simple c program
/*
NAME : DAVID GICHUKI
REG : CT100/G/26130/25
DESCRIPTION : password system prompting the user to enter number. 
*/

#include <stdio.h>

int main() {
    int password;

    // prompting the user to enter password
    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted \n");

    return 0;
}