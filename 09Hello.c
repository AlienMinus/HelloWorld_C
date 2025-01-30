/*
    Program: String Concatenation in C
    Author: minus
    Date: 30 January 2025
    Description: This program demonstrates the concatenation of two strings using the strcat function in C.
*/

#include <stdio.h>   // Standard Input-Output library for printf, puts
#include <string.h>  // String library for string manipulation functions like strcat

int main() {
    // Declaring and initializing two character arrays (strings)
    char str1[13] = "Hello";   // str1 has enough space (13 bytes) to store concatenated result
    char str2[] = " World!";   // str2 holds " World!"

    // Concatenating str2 to str1 using strcat and printing the result using puts
    puts(strcat(str1, str2));  // strcat modifies str1 by appending str2, and puts prints it

    return 0;  // Indicating successful program execution
}
