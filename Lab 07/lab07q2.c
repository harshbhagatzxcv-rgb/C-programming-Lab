#include <stdio.h>
#include <string.h> // Needed for the strcpy function

// Define the union called Data correctly with an array size
union Data {
    int i;
    float f;
    char str[20]; // Correctly defined as an array of 20 characters
};

int main() {
    // Declare a variable of type union Data
    union Data data;

    // --- 1. Assign value to 'i' and print all members ---
    data.i = 10;
    printf("After assigning data.i = 10:\n");
    printf("i: %d\n", data.i);
    // These might look like garbage:
    printf("f: %f\n", data.f); 
    printf("str: %s\n", data.str);
    printf("\n");

    // --- 2. Assign value to 'f' and print all members ---
    data.f = 220.5;
    printf("After assigning data.f = 220.5:\n");
    // These might look like garbage:
    printf("i: %d\n", data.i);
    printf("f: %f\n", data.f);
    printf("str: %s\n", data.str);
    printf("\n");

    // --- 3. Assign value to 'str' and print all members ---
    // Use strcpy to put a string into the character array (now safe to do so)
    strcpy(data.str, "Hello World"); 
    printf("After assigning data.str = \"Hello World\":\n");
    // These might look like garbage:
    printf("i: %d\n", data.i);
    printf("f: %f\n", data.f);
    printf("str: %s\n", data.str);
    printf("\n");

    return 0;
}
