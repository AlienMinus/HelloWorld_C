/*
    Program: Return and Print a String using Array
    Author: minus
    Date: 30 January 2025
    Description: This program demonstrates a function `Hello` that takes a string (array) as an argument 
                 and returns it. The main function prints the returned string.
*/

#include <stdio.h>  // Standard input-output library

// Function definition: Hello takes a string array as an argument and returns it
char* Hello(char str[]) {
    return str;  // Return the string array passed to the function
}

int main() {
    char str[] = "Hello World!";  // Declare and initialize a string array

    // Call the Hello function and print the returned string
    printf("%s\n", Hello(str));  // This will print: Hello World!

    return 0;  // Successful execution
}
