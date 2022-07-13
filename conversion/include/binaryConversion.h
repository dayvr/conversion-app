#ifndef BINARYCONVERSION_H_
#define BINARYCONVERSION_H_

#include <stdbool.h>

// Read binary number from user
void getBinary(char* b);

// Convert binary to decimal number
void binaryToDecimal(void);

// Convert binary to hexadecimal number
void binaryToHexa(void);

// Convert binary to decimal number
int fromBinaryToDecimal(char b[]);

// Check if length of the binary number is greater than 32 if it is shows a message and exit the program
int checkBinaryLen(char * s);

// Check if the string entered by the user is a valid binary number
bool isBinary(const char *input);

#endif /* BINARYCONVERSION_H_ */