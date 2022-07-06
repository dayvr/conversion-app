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
    
    default:
        break;
    }
    return 0;
}