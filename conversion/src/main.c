#include <stdio.h>
#include <stdlib.h>
#include "conversion.h"

int main() {
    showMenu();
    getOption();

    switch (option)
    {
    case 1:
        puts("_________________________________________");
        puts("          Decimal to Binary");
        puts("_________________________________________");
        decimalToBinary();
        break;

    case 2:
        puts("_________________________________________");
        puts("          Decimal to Hexadecimal");
        puts("_________________________________________");
        decimalToHexa();
        break;

    case 3:
        puts("_________________________________________");
        puts("          Binary to Decimal");
        puts("_________________________________________");
        binaryToDecimal();
        break;

    case 4:
        puts("_________________________________________");
        puts("          Binary to Hexadecimal");
        puts("_________________________________________");
        binaryToHexa();
        break;

    case 5:
        puts("_________________________________________");
        puts("          Hexadecimal to Decimal");
        puts("_________________________________________");
        hexaToDecimal();
        break;

    case 6:
        puts("_________________________________________");
        puts("          Hexadecimal to Binary");
        puts("_________________________________________");
        hexaToBinary();
        break;

    case 0:
        puts("Exiting the program...\n");
        exit(0);
    
    default:
        puts("ENTER A VALID OPTION PLEASE");
        getOption();
    }
    return 0;
}