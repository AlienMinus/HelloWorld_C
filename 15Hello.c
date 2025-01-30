/*
    Program: Simple String Printing Using Pointer
    Author: minus
    Date: 30 January 2025
    Description: This program demonstrates how to use a pointer to a string literal
                 and print it using `printf()`.
*/

#include <stdio.h>  // Standard input-output library

int main() {
    // Pointer to a string literal
    char *str = "Hello World!";  // String literal is assigned to the pointer
    
    // Printing the string using the pointer
    printf("%s\n", str);  // The pointer `str` points to the string "Hello World!"
    
    return 0; // Successful execution
}
