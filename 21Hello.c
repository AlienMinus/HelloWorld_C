/*
    Program: Print Two Strings Using a Function with a Loop
    Author: minus
    Date: 30 January 2025
    Description: This program prints two strings: "Hello" and "World!" by calling a function that prints each 
                 string character by character using a loop.
*/

#include <stdio.h>  // Standard input-output library
#include <string.h>  // For string manipulation functions like strlen

// Function to print each character of a string one by one
void printStr(char str[]) {
    // Loop through each character in the string, excluding the null terminator
    for (int i = 0; i < strlen(str); i++) {  // Fixed the condition to avoid accessing null terminator
        printf("%c", str[i]);  // Print each character of the string
    }
}

int main() {
    // Define two strings: str1 and str2
    char str1[] = "Hello";  
    char str2[] = "World!";

    // Call the printStr function to print both strings with a space in between
    printStr(str1);  // This will print: Hello
    printf(" ");      // Print a space between the two strings
    printStr(str2);  // This will print: World!

    return 0;  // Successful execution
}
