/*
    Program: Print a string using pointer and putchar
    Author: minus
    Date: 30 January 2025
    Description: This program prints each character of a string using a pointer and putchar.
*/

#include <stdio.h>  // Include standard input-output library

int main() {
    // Define a constant pointer to a string literal "Hello World!\n"
    const char *str = "Hello World!\n";
    
    // While the current character pointed to by str is not null (end of string)
    while (*str) {
        // Output the current character using putchar, then move to the next character by incrementing the pointer
        putchar(*str++);
    }
    
    return 0;  // Indicate successful execution
}
