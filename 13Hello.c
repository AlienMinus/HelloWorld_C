/*
    Program: Function Returning a String
    Author: minus
    Date: 30 January 2025
    Description: This program defines a function that returns 
                 the string "Hello World!" and prints it in main().
*/

#include <stdio.h>  // Standard input-output library

// Function definition: Returns a string
char* Hello() {
    return "Hello World!";  // Return string constant
}

int main() {
    printf("%s\n", Hello());  // Print the returned string
    return 0; // Successful execution
}
