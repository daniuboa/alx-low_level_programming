#ifndef VARIADIC_FUNCTIOS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_struc - Format-type class
 *
 * @format: Format identifier
 * @fmt_print_funct: Pointers to function that prints in the format of @format
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
