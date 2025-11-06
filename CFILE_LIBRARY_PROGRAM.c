// Library Book Borrowing Tracker
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program allows the librarian to enter book titles
and save them into a text file named "borrowed_books.txt"
without deleting previous records.
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    // Open file in append mode so old data remains
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title borrowed today: ");
    fgets(title, sizeof(title), stdin);

    // Write to file
    fprintf(file, "%s", title);

    printf("Book title saved successfully to borrowed_books.txt\n");

    fclose(file); //  close file
    return 0;
}