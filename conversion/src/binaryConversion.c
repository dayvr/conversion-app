#include <stdio.h>
#include "conversion.h"
#include <math.h>
#include <ctype.h>

// Read binary number from user
void getBinary() {
    printf("ENTER BINARY NUMBER: ");
    scanf("%d", &binary);
    bNumber = binary;
}

// The decimal number is equal to the sum of binary digits times their power of 2
// decimal = bd0×2^0 + bd1×2^1 + bd2×2^2 + ... 
int fromBinaryToDecimal(void) {
    int i, remainder, decimalNum = 0;
    for(int i = 0; binary > 0; i++) {
        remainder = binary % 10;
        decimalNum += remainder * pow(2, i);
        binary = binary / 10;
    }
    return decimalNum;
}

// Convert binary to decimal number
void binaryToDecimal() {
    getBinary();
    dNum = fromBinaryToDecimal();
    puts("_________________________________________");
    printf("RESULT\n      %d = %d\n", bNumber, dNum);
    puts("_________________________________________\n");
}

// Convert binary to hexadecimal number
// First, convert a binary into decimal, then into hexa using %X in printf statement
void binaryToHexa() {
    getBinary();
    dNum = fromBinaryToDecimal();
    puts("_________________________________________");
    printf("RESULT\n      %d = %X\n", bNumber, dNum);
    puts("_________________________________________\n");
}