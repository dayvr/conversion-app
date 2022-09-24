#include <stdio.h>
#include "decimalConversion.h"
#include <stdarg.h> /* Allows functions to accept an indefinite number of arguments. 
                       Provides facilities for stepping through a list of function arguments of unknown number and type.
                    */

// Global variable
int option;

// Print the program menu
void showMenu() {
    printf("\n");
    puts(" _______________________________________");
    puts("|                                       |");
    puts("|      MENU NUMBER SYSTEM CONVERSION    |");
    puts("|_______________________________________|");
    puts("|                                       |");
    puts("|      1. Decimal to binary             |");
    puts("|      2. Decimal to hexadecimal        |");
    puts("|      3. Binary to decimal             |");
    puts("|      4. Binary to hexadecimal         |");
    puts("|      5. Hexadecimal to decimal        |");
    puts("|      6. Hexadecimal to binary         |");
    puts("|      7. Conversion table              |");
    puts("|      0. Exit                          |");
    puts("|_______________________________________|");
    printf("\n");
}

// Read the menu option from the user
int getOption() {
    int i;
    printf("ENTER AN OPTION: ");
    i = scanf("%d", &option);
    return i;
}

// Variadic function that can take a variable number of arguments for wrapping printf()
void printResult(const char *format, ...) {
    va_list args;             // Declaring pointer to the argument list
    va_start(args, format);   // Initialize argument list
    vprintf(format, args);    // Send formatted output to stdout using argument list passed
    puts("________________________________________");
    va_end(args);             // End of argument list traversal
}

char askToContinue() {
    char ch;
    do {
        fflush(stdin);
        printf("Do you want to continue? (y/n): ");
    	scanf("%c", &ch);
    } while (ch != 'y' && ch != 'n');

    return ch;
}