/*
    Program: Print "Hello World!" using recursion
    Author: minus
    Date: 30 January 2025
    Description: This program uses recursion to print "Hello World!" a specified number of times.
*/

#include <stdio.h>  // Standard input-output library

// Recursive function to print "Hello World!" n times
void recursivePrint(int n) {
    if (n == 0) return;  // Base case: if n is 0, return (stop recursion)
    
    // Print "Hello World!" followed by a newline
    printf("Hello World!\n");
    
    // Recursive call to print the message (n-1) more times
    recursivePrint(n - 1);
}

int main() {
    // Call recursivePrint function to print "Hello World!" 1 time
    recursivePrint(1);
    return 0;  // Indicate successful execution
}
