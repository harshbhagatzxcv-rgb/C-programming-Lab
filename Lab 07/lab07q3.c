#include <stdio.h>

// Define the structure called Rectangle
struct Rectangle {
    int length;
    int breadth;
};

// Function prototype: Takes no input, returns a struct Rectangle
struct Rectangle inputRectangle();

// Function prototype: Takes a struct Rectangle as input, returns an int
int area(struct Rectangle r);


int main() {
    // Call inputRectangle() to get the structure from user input
    struct Rectangle my_rectangle = inputRectangle();

    // Call area() to calculate the area based on the struct data
    int rectangle_area = area(my_rectangle);

    // Print the final result
    printf("\nArea of the rectangle with Length %d and Breadth %d is: %d\n", 
           my_rectangle.length, my_rectangle.breadth, rectangle_area);

    return 0;
}


// Function definition for inputRectangle()
// Takes input for a rectangle and returns it as a structure
struct Rectangle inputRectangle() {
    struct Rectangle temp_rect; // Temporary structure to hold input

    printf("Enter Length: ");
    scanf("%d", &temp_rect.length);

    printf("Enter Breadth: ");
    scanf("%d", &temp_rect.breadth);

    return temp_rect; // Return the entire structure
}

// Function definition for area()
// Calculates and returns the area of the given rectangle structure
int area(struct Rectangle r) {
    // Calculate area using the members of the input structure 'r'
    return r.length * r.breadth;
}
