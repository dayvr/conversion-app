#include <stdio.h>
#include <math.h>
#include "conversion.h"

// Read number from the user
void getNumber() {
    printf("ENTER DECIMAL NUMBER: ");
    scanf("%d", &decimal);
    number = decimal;
}

// Convert decimal number to binary number
void decimalToBinary(){
    int binary[32];
    int i = 0;

    getNumber();

    // Find the remainder of the division by 2 and store it in the array, divide by 2 and get the quotient for next iteration
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // Print array in reverse order
    puts("_________________________________________");
    printf("RESULT\n      %d = ", number);
    for(i = i-1; i >= 0; i--) {
        printf("%d",binary[i]);
    }
    puts("\n_________________________________________\n");
}

// Convert decimal number to hexadecimal number
void decimalToHexa() {
    const char hexaDigits[] = "0123456789ABCDEF";
    char hexaNum[17];
    int remainder, i = 0;
    
    getNumber();

    while(decimal > 0) {
        remainder = decimal % 16;
        hexaNum[i] = hexaDigits[remainder];
        decimal /= 16;
        i++;
    }

    puts("_________________________________________");
    printf("RESULT\n      %d = ", number);
    for(i = i-1; i >= 0; i--) {
        printf("%c", hexaNum[i]);
    }
    puts("\n_________________________________________\n");
}

