/*
    Program: Print String using a Function with a Loop
    Author: minus
    Date: 30 January 2025
    Description: This program defines a function `printStr` that takes a string (array) as input and prints it
                 character by character. It uses a loop to print each character of the string.
*/

#include <stdio.h>  // Standard input-output library
#include <string.h>  // String manipulation functions (for strlen)


// Function definition: This function prints each character of the string one by one
void printStr(char str[]) {
    // Loop through each character in the string
    for (int i = 0; i <= strlen(str); i++) {
        printf("%c", str[i]);  // Print each character of the string
    }
}

int main() {
    // Initialize a string (character array) with "Hello World!"
    char str[13] = "Hello World!";  

    // Call the printStr function to print the string
    printStr(str);  // This will print: Hello World!

    return 0;  // Successful execution
}
