#include <stdio.h>
#include "conversion.h"
#include <math.h>

void getBinary() {
    printf("ENTER A BINARY NUMBER: ");
    scanf("%d", &binary);
    number = binary;
}

void binaryToDecimal() {
    int decimalNum = 0, remainder;
    getBinary();

    for(int i = 0; binary > 0; i++) {
        remainder = binary % 10;
        decimalNum += remainder * pow(2, i);
        binary = binary / 10;

    }
    printf("RESULT: %d binary = %d decimal", number, decimalNum);
}