#ifndef MENU_H_
#define MENU_H_

// Print the program menu
void showMenu();

// Read the menu option from the user
int getOption();

// Variadic function that can take a variable number of arguments for wrapping printf()
void printResult(const char *format, ...);

char askToContinue();

#endif /* MENU_H_ */