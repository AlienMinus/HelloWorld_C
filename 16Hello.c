/*
    Program: Print "Hello World!" Using ASCII Values
    Author: minus
    Date: 30 January 2025
    Description: This program demonstrates how to print the string "Hello World!"
                 by using their corresponding ASCII values instead of the characters.
*/

#include <stdio.h>  // Standard input-output library

int main() {
    // Printing each character using their ASCII values
    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33);

    // ASCII values for "Hello World!" are:
    // 72 - 'H'
    // 101 - 'e'
    // 108 - 'l'
    // 108 - 'l'
    // 111 - 'o'
    // 32  - ' ' (space)
    // 87  - 'W'
    // 111 - 'o'
    // 114 - 'r'
    // 108 - 'l'
    // 100 - 'd'
    // 33  - '!' (exclamation mark)

    return 0;  // Successful execution
}
