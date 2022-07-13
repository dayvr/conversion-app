#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include <stdbool.h>

#define MAX 33

// Check if the string entered by the user is a valid binary number
bool isBinary(const char *input) {
    for (int i = 0; input[i]; ++i)
        if (input[i] != '0' && input[i] != '1')
            return false;
    return true;
}

// Check if length of the binary number is greater than 32 if it is shows a message and exit the program
int checkBinaryLen(char * s) {
    int count = 0;
    char * bnum = s;

    if(!isBinary(s)) {
        puts("\n\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
        puts("\t|                                     |");
        puts("\t|   BINARY NUMBER NOT VALID           |");
        puts("\t|   TRY AGAIN!                        |");
        puts("\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
        exit(0);
    }

    while(*bnum != '\0') {
        count++;
        bnum++;
        if(count > 32) {
            puts("\n\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
            puts("\t|                                     |");
            puts("\t|   VALID BINARY NUMBER IS 32 DIGITS  |");
            puts("\t|   TRY AGAIN!                        |");
            puts("\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
            exit(0);
        }
    }
    return 0;
}

// Read binary number from user
void getBinary(char* b) {
    printf("ENTER BINARY NUMBER: ");
    scanf("%33s", b);
}

// The decimal number is equal to the sum of binary digits times their power of 2
// decimal = bd0×2^0 + bd1×2^1 + bd2×2^2 + ... 
int fromBinaryToDecimal(char b[]) {
    int binary = atoi(b);
    int i, remainder, decimalNum = 0;

    for(int i = 0; binary > 0; i++) {
        remainder = binary % 10;
        decimalNum += remainder * pow(2, i);
        binary /= 10;
    }
    return decimalNum;
}

// Convert binary to decimal number
void binaryToDecimal() {
    char binary[MAX], bNumber[MAX];
    int dNum;

    getBinary(binary);
    checkBinaryLen(binary);
    strcpy(bNumber, binary);
    dNum = fromBinaryToDecimal(binary);
    printResult("\n\tRESULT: %s = %d\n\n", bNumber, dNum);
}

// Convert binary to hexadecimal number
// First, convert a binary into decimal, then into hexa using %X in printf statement
void binaryToHexa() {
    char binary[MAX], bNumber[MAX];
    int dNum;

    getBinary(binary);
    checkBinaryLen(binary);
    strcpy(bNumber, binary);
    dNum = fromBinaryToDecimal(binary);
    printResult("\n\tRESULT: %s = 0x%x\n\n", bNumber, dNum);
}