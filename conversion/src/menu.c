#include <stdio.h>
#include "conversion.h"

// Print the program menu
void showMenu() {
    printf("\n");
    puts(" ________________________________________");
    puts("|                                        |");
    puts("|        MENU NUMBER SYSTEM CONVERSION   |");
    puts("|________________________________________|");
    puts("|                                        |");
    puts("|        1. Decimal to binary            |");
    puts("|        2. Decimal to hexadecimal       |");
    puts("|        3. Binary to decimal            |");
    puts("|        4. Binary to hexadecimal        |");
    puts("|        5. Hexadecimal to decimal       |");
    puts("|        6. Hexadecimal to binary        |");
    puts("|        0. Exit                         |");
    puts("|________________________________________|");
    printf("\n");
}

// Read the menu option from the user
void getOption() {
    printf("ENTER AN OPTION: ");
    scanf("%d", &option);
}