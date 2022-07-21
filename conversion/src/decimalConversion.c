#include <stdio.h>
#include <math.h>
#include "decimalConversion.h"
#include "menu.h"

#define MAX 32

// Read number from the user
int getNumber(void) {
	int decimal, input, status;

	printf("Enter decimal number: ");
	status = scanf("%d", &decimal); // Returns 1 if reading succesful
	
    // Input validation
    while(status!=1){
		while((input=getchar()) != EOF && input != '\n');
		printf("\nInvalid input\nEnter a number: ");
		status = scanf("%d", &decimal);
	}
	
    printf("\nYour number is %d\n", decimal);

    return decimal;
}

// Convert decimal number to binary number
void decimalToBinary(){
    int binary[MAX];
    char result[MAX];
    int decimal, number, i = 0, j;

    // Get number from user
    decimal = getNumber();
    number = decimal;

    // Find the remainder of the division by 2 and store it in the array, divide by 2 and get the quotient for next iteration
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // Print array in reverse order
    for(i = i-1, j = 0; i >= 0; i--, j++) {
        sprintf(result+j, "%d", binary[i]);
    }
    printResult("\nRESULT: %d d = %s b\n", number, result);
}

// Convert decimal number to hexadecimal number
void decimalToHexa(void) {
    char hexaNum[MAX];
    int decimal;
    
    decimal = getNumber();
    sprintf(hexaNum,"%X",decimal);

    printResult("RESULT: %d d = 0x%s\n", decimal, hexaNum);
}