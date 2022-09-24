#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "menu.h"

#define MAX 100
#define B 100
#define H 32

bool is_hexa(char *str) {
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++) {
		if (!((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'a' && str[i] <= 'f') ||
			(str[i] >= 'A' && str[i] <= 'F'))) {
            puts("Not valid");
			return false;
        }
	}

	return true;
}

// Read hexadecimal number from user
void getHex(char* h) {
    do {
        printf("ENTER HEXA NUMBER: ");
        scanf("%s", h);
    } while (!(is_hexa(h)));
}


// Check length of hex number, if greater than 8 characters print an error message
int checkLen(char * s) {
    int count = 0;
    char * hnum = s;

    while(*hnum != '\0') {
        count++;
        hnum++;
        if(count > 8) {
            puts("\n _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
            puts("|                                 |");
            puts("|   VALID HEX NUMBER IS 8 DIGITS  |");
            puts("|   TRY AGAIN!                    |");
            puts("|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
            exit(0);
        }
    }
    return 0;
}

// Convert hexa to decimal number
void hexaToDecimal(void) {
    char hex[H];
    int h;

    getHex(hex);
    checkLen(hex);
    sscanf(hex, "%x", &h); // 

    if (h < 0) {
        // Printing unsigned and signed numbers in a 32- bit architechture
        printResult("RESULT: 0x%x = %u (%d)\n", h, h, h);
    } else {
        // Unsigned decimal number
        printResult("RESULT: 0x%x = %u d\n", h, h);
    }
}

void hexaToBinary(void) {
    char hexa[H], binary[B] = "";   
    int i = 0;
    
    // Get input from user
    getHex(hexa);
    checkLen(hexa);

    /* Extract first digit and find binary of each hex digit */
    for(i=0; hexa[i]!='\0'; i++){
        if(hexa[0] == '0' && hexa[1] == 'x') {
            continue;
        }
        switch(hexa[i])
        {
            case '0':
                strcat(binary, "0000 ");
                break;
            case '1':
                strcat(binary, "0001 ");
                break;
            case '2':
                strcat(binary, "0010 ");
                break;
            case '3':
                strcat(binary, "0011 ");
                break;
            case '4':
                strcat(binary, "0100 ");
                break;
            case '5':
                strcat(binary, "0101 ");
                break;
            case '6':
                strcat(binary, "0110 ");
                break;
            case '7':
                strcat(binary, "0111 ");
                break;
            case '8':
                strcat(binary, "1000 ");
                break;
            case '9':
                strcat(binary, "1001 ");
                break;
            case 'a':
            case 'A':
                strcat(binary, "1010 ");
                break;
            case 'b':
            case 'B':
                strcat(binary, "1011 ");
                break;
            case 'c':
            case 'C':
                strcat(binary, "1100 ");
                break;
            case 'd':
            case 'D':
                strcat(binary, "1101 ");
                break;
            case 'e':
            case 'E':
                strcat(binary, "1110 ");
                break;
            case 'f':
            case 'F':
                strcat(binary, "1111 ");
                break;
            case 'X':
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
    }

    // Print result
    printResult("\nRESULT: 0x%s = %s\n", hexa, binary);

    if(hexa[0] == '0' && hexa[1] == 'x') {
        char hnum[H];
        strcpy(hnum, hexa);
    }
}