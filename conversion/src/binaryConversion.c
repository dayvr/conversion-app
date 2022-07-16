#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "menu.h"

#define MAX 100

char* itoa(int val, int base){
	
	static char buf[32] = {0};
	
	int i = 30;
	
	for(; val && i ; --i, val /= base)
	
		buf[i] = "0123456789abcdef"[val % base];
	
	return &buf[i+1];
	
}


// Read binary number from user
void getBinary(int b) {
    int binary[MAX], i, status;
    printf("Enter binary number: ");
    scanf("%d", &b);

    // Check if the string entered by the user is a valid binary number
    char sb[MAX];
    strcpy(sb, itoa(b, 10));
    while(sb[i] != '\0') {
        if((sb[i] == '0' || sb[i] == '1') && strlen(sb) <= 40) {
            continue;
        } else {
            printf("Invalid input... please enter a binary: ");
            status = 0;
        }
    }
}

// The decimal number is equal to the sum of binary digits times their power of 2
// decimal = bd0×2^0 + bd1×2^1 + bd2×2^2 + ... 
int fromBinaryToDecimal(int binary) {
    int i, remainder, decimalNum = 0;

    while(binary != 0) {
        remainder = binary % 10;
        decimalNum += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimalNum;
}

// Convert binary to decimal number
void binaryToDecimal() {
    int binary;
    int dNum;

    getBinary(binary);
    dNum = fromBinaryToDecimal(binary);
    // printResult("RESULT: %s = %d\n", bNumber, dNum);
}

// Convert binary to hexadecimal number
// First, convert a binary into decimal, then into hexa using %X in printf statement
void binaryToHexa() {
    char binary[MAX], bNumber[MAX];
    int dNum;

    // // getBinary(binary);
    // // checkBinary(binary);
    // strcpy(bNumber, binary);
    // // dNum = fromBinaryToDecimal(binary);
    // printResult("RESULT: %s = 0x%X\n", bNumber, dNum);
}