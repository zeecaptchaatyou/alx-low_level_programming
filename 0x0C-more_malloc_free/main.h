#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

void _strcpy(char *dest, const char *src);
void _strncat(char *dest, char *src, int n);
unsigned int _strlen(char *s);
#endif