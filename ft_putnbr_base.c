#include "ft_printf.h"

int ft_putnbr_base(long nb, long base, char c)
{
    int readed;
    char *set;

    readed = 0;
    set = "0123456789abcdef";
    if (c == 'X')
        set = "0123456789ABCDEF";
    if (nb >= base)
        readed += ft_putnbr_base((nb / base), base, c);
    readed += ft_putchar(set[nb % base]);
    return (readed);
}