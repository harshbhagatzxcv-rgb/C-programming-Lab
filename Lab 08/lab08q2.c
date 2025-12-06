/*Write a C program to read the contents of a file and display them on the screen.
Ask the user for a filename.
Open the file in read mode ("r").
Read the entire file
Display the contents on the console. */
#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *file_pointer;
    char filename[100]; 
    char ch;     

   
    printf("Enter the name of the file to read (e.g., input.txt): ");
    scanf("%s", filename);

    
    file_pointer = fopen(filename, "r");

   
    if (file_pointer == NULL) {
        printf("Error: Could not open file %s\n", filename);
         exit(EXIT_FAILURE); 
    }

    printf("\n--- Contents of %s ---\n", filename);

    
   
    while (( ch = fgetc(file_pointer)) != EOF) {
        
        printf("%c", ch);
    }

    printf("\n--- End of file ---\n");

    fclose(file_pointer);

    return 0;
}
