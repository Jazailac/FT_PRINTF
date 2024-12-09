#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putnbr_base(long nb, long base, char c);
int ft_putnbr(long nb);
int ft_putstr(const char *str);

#endif