#include "ft_printf.h"

int ft_putnbr(long nb)
{
    int readed;

    readed = 0;
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
        readed += 1;
    }
    if (nb >= 10)
    {
        readed += 1;
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
    if (nb >= 0 && nb <= 9)
        ft_putchar(nb + '0');
    return (readed);
}