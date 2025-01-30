/*
    Program: Print String Using puts
    Author: Minus
    Date: 30 January 2025
    Description: This program prints the string "Hello World!" using the `puts` function.
*/

#include <stdio.h>   // Include the standard input-output library to enable using puts for console output

int main()  // Main function, where the execution of the program begins
{
    char str[] = "Hello World!";  // Declare and initialize a character array with the string "Hello World!"
    
    puts(str);  // Use the puts function to print the string to the console. `puts` automatically adds a newline after printing
    
    return 0;  // Return 0 to the operating system, indicating successful execution
}
