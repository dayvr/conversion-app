#include <stdio.h>
#include <stdlib.h>
#include "decimalConversion.h"
#include "binaryConversion.h"
#include "hexaConversion.h"
#include "conversionTable.h"

void show() {
    showMenu();
    getOption();
    while(option > 0 && option > 7) {
        puts("=> ENTER A VALID OPTION PLEASE");
        puts("   CHOOSE AN OPTION BETWEEN 0 - 6");
        getOption();
    }
}

int main() {
	char ch;
    do {
        show();

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

	    printf ("Do you want to continue? (y/n): ");
		scanf("%c", &ch);
    
    } while (ch == 'y');

    return 0;
}