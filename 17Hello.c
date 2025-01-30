/*
    Program: Copy and Print a String Using strcpy
    Author: minus
    Date: 30 January 2025
    Description: This program demonstrates how to copy a string to a character array
                 using the `strcpy` function from the string.h library and then prints it.
*/

#include <stdio.h>  // Standard input-output library
#include <string.h>  // String manipulation functions library

int main() {
    char str[20];  // Declaring a character array with enough space to hold the string

    // Copying the string "Hello World!" into the 'str' array
    strcpy(str, "Hello World!");

    // Printing the string stored in 'str'
    printf("%s\n", str);

    return 0;  // Successful execution
}
