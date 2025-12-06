#include <stdio.h>

// Define the structure called Student
struct Student {
    char name[50]; // Max 50 characters
    int sap_id;
    float marks;
};

int main() {
    // Create an array of 5 students, integer variable 'i' for loops
    struct Student students[5]; 
    int i;
    int student_count = 5;

    printf("Enter details for 5 students (Names cannot contain spaces):\n");

    // --- INPUT PHASE ---
    for (i = 0; i < student_count; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        // Use basic scanf for string input
        scanf("%s", students[i].name); 

        printf("Enter SAP ID: ");
        scanf("%d", &students[i].sap_id);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // --- OUTPUT PHASE ---
    printf("\n\n--- Displaying All Student Details ---\n\n");
    
    // Print a simple header
    printf("Name                            | SAP ID     | Marks\n");
    printf("--------------------------------|------------|-------\n");

    // Loop to display the details of all students
    for (i = 0; i < student_count; i++) {
        // Use basic fixed-width formatting for output table
        printf("%-31s | %-10d | %d\n", 
               students[i].name, 
               students[i].sap_id, 
               students[i].marks);
    }

    return 0;
}
