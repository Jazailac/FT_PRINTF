#include "ft_printf.h"

int check_prossesor(const char c, va_list pa, int readed)
{
    if (c == 'd' || c == 'i')
        readed += ft_putnbr(va_arg(pa, int));
    else if (c == 'c')
        readed += ft_putchar(va_arg(pa, int));
    else if (c == 's')
        readed += ft_putstr(va_arg(pa, char *));
    else if (c == '%')
        readed += ft_putchar('%');
    else if (c == 'u')
        readed += ft_putnbr_base((long)va_arg(pa, char *), 10, c);
    else if (c == 'x' || c == 'X')
        readed += ft_putnbr_base((long)va_arg(pa, char *), 16, c);
    else if (c == 'p')
    {
        readed += ft_putstr("0x") ;
        readed += ft_putnbr_base((long)va_arg(pa, char *), 16, c);
    }
    else
        readed += ft_putchar(c);
    return readed;
}


int ft_printf(const char *str, ...)
{
    int readed;
    va_list pa;
    int i;

    readed = 0;
    i = 0;
    if (!str)
        return (0);
    va_start(pa, str);
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1])
        {
            i++;
            readed = check_prossesor(str[i], pa, readed);
        }
        else if (str[i] == '%')
            return (readed);
        else 
            readed += ft_putchar(str[i]);
        i++;
    }
    va_end(pa);
    return (readed);
}

// #include "stdio.h"

// int main()
// {
    
//     ft_printf("this is mine : \n");
//     ft_printf("%");
//     printf("this is theirs : \n");
//     printf("%");
// }