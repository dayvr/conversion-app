#ifndef CONVERSION_H_
#define CONVERSION_H_

// Global variables
int bNumber, binary, dNum, hexNum, hNum;
extern int option;

// Print the program menu
void showMenu(void);

// Read the menu option from the user
void getOption(void);

// Read decimal number from the user
int getNumber(void);

// Convert decimal number to binary number
void decimalToBinary(void);

// Convert decimal number to hexadecimal number
void decimalToHexa(void);

// Read binary number from user
void getBinary(void);

// Convert binary to decimal number
void binaryToDecimal(void);

// Convert binary to hexadecimal number
void binaryToHexa(void);

// Convert binary to decimal number
int fromBinaryToDecimal(void);

// Read hexa number from the user
int getHex(void);

// Convert hexa to decimal number
void hexaToDecimal(void);

// Convert hexa to binary number
void hexaToBinary(void);

#endif /* CONVERSION_H_ */