/*
    Program: Character Array as a String
    Author: minus
    Date: 30 January 2025
    Description: This program initializes a character array manually 
                 with individual characters and prints it as a string.
*/

#include <stdio.h>  // Standard input-output library

int main() {
    // Defining a character array with a manual null terminator
    char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 
                  'W', 'o', 'r', 'l', 'd', '!', '\0'};
    
    // Printing the string using printf()
    printf("%s\n", str);  

    return 0; // Successful execution
}
