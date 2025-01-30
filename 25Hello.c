/*
    Program: Print "Hello World!" using a do-while loop
    Author: minus
    Date: 30 January 2025
    Description: This program uses a do-while loop to print "Hello World!" once.
*/

#include <stdio.h>  // Standard input-output library

int main() {
    int i = 0;  // Initialize the loop counter variable 'i'
    
    // Do-while loop: the code inside the loop is executed at least once
    do {
        // Print "Hello World!" with a newline after
        printf("Hello World!\n");
        
        // Increment 'i' to eventually stop the loop
        i++;  
    } while (i < 1);  // Loop condition: checks if 'i' is less than 1

    return 0;  // Indicate successful execution
}
