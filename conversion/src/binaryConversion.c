#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "menu.h"

#define MAX 100

bool zeros_and_ones(long long n) {
    for (; n != 0; n /= 10) {
        int mod = n % 10;
        if (0 != mod && 1 != mod) {
            return false;
        }
    }
    return true;
}

int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

void binaryToDecimal() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  if(!zeros_and_ones(n)) {
    puts("Not valid");
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    // exit(0);
  }
  printf("%lld in binary = %d in decimal\n", n, convert(n));
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