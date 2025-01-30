/*
    Program: Print "Hello World!" using a while loop
    Author: minus
    Date: 30 January 2025
    Description: This program uses a while loop to print "Hello World!" once.
*/

#include <stdio.h>  // Standard input-output library

int main() {
    int i = 0;  // Initialize the loop counter variable 'i'
    
    // While loop that runs as long as 'i' is less than 1
    while (i < 1) {
        // Print "Hello World!" with a newline after
        printf("Hello World!\n");  
        
        // Increment 'i' to eventually stop the loop
        i++;  
    }

    return 0;  // Indicate successful execution
}
