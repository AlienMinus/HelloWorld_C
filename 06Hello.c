/*
    Program: Print String Character-by-Character
    Author: Minus
    Date: 30 January 2025
    Description: This program prints the string "Hello World!" character by character using a `for` loop.
*/

#include <stdio.h>   // Include the standard input-output library to enable using printf for console output
#include <string.h>   // Include the string library to use the strlen function for determining the string length

int main()  // Main function, where the execution of the program begins
{
    char str[13] = "Hello World!";  // Declare a character array with a size of 13 to hold the string "Hello World!" (12 characters + null terminator)
    
    // Loop through each character of the string using the strlen function to determine the string length
    for (int i = 0; i < strlen(str); i++) {  
        printf("%c", str[i]);  // Print the character at the current index of the string
    }
    
    return 0;  // Return 0 to the operating system, indicating successful execution
}
