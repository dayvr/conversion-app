#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "menu.h"

#define LEN 100

// Check if input is a valid binary number
bool is_binary(char *str) {
  char bit;
  for (bit = *str; bit != '\0'; bit = *str++) {
    if (bit != '0' && bit != '1' && bit != '\n') {
      puts("Not valid");
      return false;
    }
  }
  return true;
}

// Read binary number from user
void get_binary(char *b) {
  int i = 0;
  
  do {
    printf("\nEnter a binary number (32 bits max): ");
    scanf("%s", b);
  } while (!(is_binary(b)));  
}

// Convert binary to decimal number
int binary_to_decimal(void) {
  char binary_string[LEN];
  int decimal = 0;
  int i = 0;

  // Get input from user
  get_binary(binary_string);

  int len = strlen(binary_string);

  for (i = 0; i < len; i++) {
        if (binary_string[i] == '1') {
          decimal += 1 << (len - i - 1);
        }
    }

  printf("RESULT: %s = %d\n\n", binary_string, decimal);

  return decimal;
}

// Convert binary to hex number
void binary_to_hexa(void) {
  char binary[17];
  int decimal = 0;

  get_binary(binary);

  // Convert first to decimal
  for(int i=0; binary[i]!='\0'; i++) {
      decimal = decimal * 2 + (binary[i] - '0');
  }

  printf("RESULT: %s = 0x%X\n\n", binary, decimal);
}