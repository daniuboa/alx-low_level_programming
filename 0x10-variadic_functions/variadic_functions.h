#ifndef VARIADIC_FUNCTIOS_H_
#define VARIADIC_FUNCTIONS_H_
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

struct format_struct
{
	char format;
	void(*fmt_print_func)(va_list *arg_list);
};

typedef struct format_struct format_struct_ptr;

#endif
