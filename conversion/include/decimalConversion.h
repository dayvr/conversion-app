#ifndef DECIMALCONVERSION_H_
#define DECIMALCONVERSION_H_

// Global variables
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

#endif /* DECIMALCONVERSION_H_ */