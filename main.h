#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_str(char *str);
void print_int(long int num, int *len);
int _strlen(char *str);
void _switch(char c, va_list args, int *len);
void printf_bin(int n,  int *len);
void print_rot13(char *str);
int print_hexa(long int n);

#endif
