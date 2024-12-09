#include "ft_printf.h"

int ft_putstr(const char *str)
{
    int i;

    i = 0;
    if (!str)
        return (ft_putstr("(null)"));
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}
