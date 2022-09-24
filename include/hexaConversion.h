#ifndef HEXACONVERSION_H_
#define HEXACONVERSION_H_

// Read hexa number from the user
void getHex(char * h);

// Convert hexa to decimal number
void hexaToDecimal(void);

// Convert hexa to binary number
void hexaToBinary(void);

// Check length of hex number, if greater than 8 characters print an error message
int checkLen(char * s);

#endif /* HEXACONVERSION_H_ */