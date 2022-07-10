#include <stdio.h>
#include "conversion.h"
#include "menu.h"

// Read hexadecimal number from user
int getHex(void) {
    int hexNum;
    printf("ENTER HEXA NUMBER: ");
    scanf("%x", &hexNum);
    return hexNum;
}

void hexaToDecimal() {
    int hNum;
    hNum = getHex();
    printResult("RESULT\n      %X = %d\n", hNum, hNum);
}

void hexaToBinary() {
    int hn, hexNum;
    char result[256];

    hexNum = getHex();
    hn = hexNum;

    int len = sizeof(hn);
    for (int i = len - 1 ; i >= 0; i--) {
        sprintf(result, "%x", (hn & (1 << i)) >> i);
    }
    printResult("RESULT\n      %s = ", result);
}