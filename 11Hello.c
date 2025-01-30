/*
    Program: String Concatenation in C
    Author: minus
    Date: 30 January 2025
    Description: This program demonstrates the safe concatenation of multiple strings using strcat.
*/

#include <stdio.h>   // Standard Input-Output library for puts
#include <string.h>  // String library for strcat function

int main() {
    // Declaring character arrays (strings)
    char str1[20] = "Hello";  // Increased size to safely store concatenated result
    char str2[] = " ";        // Space between words
    char str3[] = "World!";   // Second word

    // Concatenating str2 and str3 to str1
    strcat(str1, str2);  // Appending space
    strcat(str1, str3);  // Appending "World!"

    // Printing the final concatenated string
    puts(str1);  // Output: "Hello World!"

    return 0;  // Indicating successful program execution
}
