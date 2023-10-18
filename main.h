#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list args);
void print_int(int num);
int _strlen(char *str);
void _switch(char c, va_list args, int *len);
void printf_bin(int n,  int *len);
int print_rot13(char *);
int print_hexa(long int n);

#endif
