
/*Write a C program to create a file and write user-entered text into it.
Ask the user for a filename.
Open the file in write mode ("w").
Allow the user to enter multiple lines of text until they type "END".
Write all lines to the file.*/
#include <stdio.h>
#include <string.h>

#define MAX_FILENAME_LEN 100
#define MAX_LINE_LEN 256

int main() {
    FILE *filePointer;
    char filename[MAX_FILENAME_LEN];
    char line[MAX_LINE_LEN];

  
    printf("Enter the filename to create/write to: ");
    if (fgets(filename, sizeof(filename), stdin) != NULL) {
      
        filename[strcspn(filename, "\n")] = 0; 
    } else {
        perror("Error reading filename");
        return 1;
    }
    filePointer = fopen(filename, "w");

    
    if (filePointer == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter text to write to the file (type 'END' on a new line to finish):\n");

    
    while (1) {
        if (fgets(line, sizeof(line), stdin) != NULL) {
            
            char temp_line[MAX_LINE_LEN];
            strcpy(temp_line, line);
            temp_line[strcspn(temp_line, "\n")] = 0;

            if (strcmp(temp_line, "END") == 0) {
                break;  
            }
            
            
            if (fputs(line, filePointer) == EOF) {
                perror("Error writing to file");
                fclose(filePointer);
                return 1;
            }
        } else {
            perror("Error reading input");
            fclose(filePointer);
            return 1;
        }
    }

    // Close the file
    if (fclose(filePointer) == EOF) {
        perror("Error closing file");
        return 1;
    }

    printf("Text successfully written to '%s'.\n", filename);

    return 0;
}