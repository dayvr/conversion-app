#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "decimalConversion.h"
#include "binaryConversion.h"
#include "hexaConversion.h"
#include "conversionTable.h"
#include "menu.h"

int main() {
	char ch;
    do {
        showMenu();
        getOption();
        while ((option > 0 && option > 7) || option < 0) {
            puts("=> ENTER A VALID OPTION PLEASE");
            puts("   CHOOSE AN OPTION BETWEEN 0 - 7");
            getOption();
        }
        switch (option){
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
            binary_to_decimal();
            break;

        case 4:
            puts("_________________________________________");
            puts("          Binary to Hexadecimal");
            puts("_________________________________________");
            binary_to_hexa();
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

        case 7:
            puts("_________________________________________");
            puts("          Conversion Table               ");
            puts("_________________________________________");
            conversionTable();
            break;

        case 0:
            puts("Exiting the program...\n");
            exit(0);
        
        default:
            break;
        }

        ch = askToContinue();
    } while(ch == 'y');

    return 0;
}