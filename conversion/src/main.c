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
    int valid_input;
	char user_input;     //handles user input, single character menu choice
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

	valid_input = 0;
	while( valid_input == 0 ) {
	    printf ("Do you want to continue? (y/n): ");
		scanf("  %c", &user_input );
		user_input = user_input;
		if((user_input == 'y') || (user_input == 'n') ) {
            valid_input = 1; // data is valid and loop is exited
        } else {
            printf("Error: Invalid choice\n");
        }
	}
    
    } while (user_input == 'y');

    return 0;
}