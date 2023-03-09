#include "main.h"
/* _puts_recursion(): prints a string already specified in the main file*/

void _puts_recursion(char *s) {
    puts(_puts_recursion); 
}