// Program: Student Results Management System (Binary File)
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program allows a university to store and view student examination results.
It uses a binary file named "results.dat" to save and retrieve data.
The user can:
1. Add new student records.
2. Display all existing records.
*/

#include <stdio.h>   
#include <stdlib.h>  


struct Student {
    char name[50];
    char regNo[20];
    int marks;
};


void addStudent();
void viewStudents();  

int main() {
    int choice; 

    // Display menu until user chooses to exit
    do {
        printf(" STUDENT RESULTS MANAGEMENT SYSTEM\n");
		printf("1. Add New Student Records\n");
        printf("2. View All Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
        getchar(); // Clear newline after scanf

        // Perform action based on user's choice
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                printf("Exiting... Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }

    } while (choice != 3);  // Continue until user chooses Exit

    return 0;
}

/*
 Function: addStudent()
 Purpose : Adds new student records and saves to results.dat
*/
void addStudent() {
    FILE *file;            
    struct Student s;       
    int n, i;               

    // Open binary file in append mode ("ab" means add new records)
    file = fopen("results.dat", "ab");
    if (file == NULL) {
        printf("Error creating or opening file!\n");
        exit(1);
    }

    // Ask how many students to enter
    printf("\nHow many students do you want to add? ");
    scanf("%d", &n);
    getchar(); // Clear newline from input buffer

    // Loop through and input each student's details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Reg No: ");
        fgets(s.regNo, sizeof(s.regNo), stdin);

        printf("Marks: ");
        scanf("%d", &s.marks);
        getchar(); // Clear newline

        // Write one record to file
        fwrite(&s, sizeof(s), 1, file);

        printf("? Record for %s saved successfully!\n", s.name);
    }

    // Close file
    fclose(file);
    printf("\nAll student records added successfully!\n");
}

/*
 Function: viewStudents()
 Purpose : Reads all student records from results.dat and displays them */
void viewStudents() {
    FILE *file;             // File pointer
    struct Student s;       // Student structure

    // Open binary file in read mode
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("\nNo records found! Please add students first.\n");
        return;  // Exit the function if file doesn’t exist
    }


    printf(" STUDENT RESULTS LIST\n");
    

    // Read and display each record until the end of the file
    while (fread(&s, sizeof(s), 1, file)) {
        printf("Name: %s", s.name);
        printf("Reg No: %s", s.regNo);
        printf("Marks: %d\n", s.marks);
        printf("------------------------------\n");
    }

    // Close the file after reading
    fclose(file);
    printf("? End of records.\n");
}