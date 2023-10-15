#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_str(char *str);
void print_int(int num);
int _strlen(char *str);
void _switch(char *s, char c);

#endif
