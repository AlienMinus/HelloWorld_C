/*
    Program: Print Two Strings Separately
    Author: Minus
    Date: 30 January 2025
    Description: This program prints two strings, "Hello" and "World!", one character at a time.
*/

#include <stdio.h>   // Include the standard input-output library to enable printf for console output
#include <string.h>   // Include the string library to use the strlen function for determining the string length

int main() {  // Main function, where the execution of the program begins
    char str1[] = "Hello", str2[] = "World!";  // Declare two character arrays: str1 for "Hello" and str2 for "World!"
    
    // Loop through each character of the first string (str1)
    for (int i = 0; i < strlen(str1); i++) {  // Loop runs through the length of str1
        printf("%c", str1[i]);  // Print each character of str1
    }
    
    printf(" ");  // Print a space between the two strings
    
    // Loop through each character of the second string (str2)
    for (int i = 0; i < strlen(str2); i++) {  // Loop runs through the length of str2
        printf("%c", str2[i]);  // Print each character of str2
    }

    return 0;  // Return 0 to the operating system, indicating successful execution
}
