/*
    Program: Print "Hello, World!" using a macro
    Author: minus
    Date: 30 January 2025
    Description: This program uses a macro to print "Hello, World!" to the console.
*/

#include <stdio.h>  // Standard input-output library

#define MESSAGE "Hello, World!"  // Define a macro MESSAGE with the string "Hello, World!"

int main() {
    // Print the MESSAGE macro, which is "Hello, World!", followed by a newline
    printf("%s\n", MESSAGE);
    
    return 0;  // Indicate successful execution
}
