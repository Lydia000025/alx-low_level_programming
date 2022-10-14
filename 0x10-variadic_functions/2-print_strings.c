#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarh.h>
/**
 * struct printer - function
 * @symbol: input
 * @print: inpu
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_listing arg);

} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
