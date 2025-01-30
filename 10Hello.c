/*
    Program: String Concatenation in C
    Author: minus
    Date: 30 January 2025
    Description: This program demonstrates the concatenation of two strings using the strcat function in C.
*/

#include <stdio.h>   // Standard Input-Output library for puts
#include <string.h>  // String library for string manipulation functions like strcat

int main() {
    // Declaring two character arrays (strings)
    char str1[20] = "Hello";  // Ensuring str1 has enough space to hold concatenated result
    char str2[8] = " World!"; // str2 holds " World!"

    // Concatenating str2 to str1 using strcat
    strcat(str1, str2);

    // Printing the concatenated result
    puts(str1);  // Output: "Hello World!"

    return 0;  // Indicating successful program execution
}
