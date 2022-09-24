#ifndef BINARYCONVERSION_H_
#define BINARYCONVERSION_H_

#include <stdbool.h>

// Read binary number from user
void get_binary(char b);

// Convert binary to decimal number
int binary_to_decimal(void);

// Convert binary to hex number
void binary_to_hexa(void);

// Check if input is a valid binary number
bool is_binary(char *str);

#endif /* BINARYCONVERSION_H_ */