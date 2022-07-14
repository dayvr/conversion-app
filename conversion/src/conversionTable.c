#include <stdio.h>
#include <string.h>
#include "decimalConversion.h"
#include "menu.h"

#define LEN 100

// Get a decimal number from the user and convert it to binary, hex and octal
void conversionTable() {
    int binary[LEN];
    char result[LEN];
    int decimal, number, i = 0, j;

    // Get number from user
    decimal = getNumber();
    number = decimal;

    // Find the remainder of the division by 2 and store it in the array, divide by 2 and get the quotient for next iteration
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // Print array in reverse order
    for(i = i-1, j = 0; i >= 0; i--, j++) {
        sprintf(result+j, "%d", binary[i]);
    }

    printf("\n\tDECIMAL ---> %d\n", number);
    printf("\tHEXA    ---> 0x%X\n", number);
    printf("\tOCTAL   ---> %o\n", number);
    printf("\tBINARY  ---> %s\n\n", result);
}