#include <stdio.h>
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
    
    default:
        break;
    }
    return 0;
}