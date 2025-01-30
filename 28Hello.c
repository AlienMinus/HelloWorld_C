/*
    Program: Print a string character by character
    Author: minus
    Date: 30 January 2025
    Description: This program uses a function to print each character of a string one by one.
*/

#include <stdio.h>  // Include standard input-output library

// Function to print a string character by character
void printStr(char str[]) {
    // Loop through each character in the string until the null terminator '\0' is reached
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);  // Print each character
    }
}

int main() {
    // Define a string using an array of characters
    char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    
    // Call the printStr function to print the string
    printStr(str);
    
    return 0;  // Indicate successful execution
}
