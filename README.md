# ft_printf

A library that contains ft_printf, a function that will mimic the original printf. You will mainly learn about using variadic arguments.

## 📝 Project Overview

The objective of this project is to recreate the printf function from libc. The function has to handle various conversions and formatting options. This project is a great way to learn about variadic functions and to improve your programming skills.

### Function Prototype
```c
int ft_printf(const char *format, ...);
```

## 🛠️ Mandatory Part

Your function must handle the following conversions:
- `%c` - Print a single character
- `%s` - Print a string
- `%p` - Print a void * pointer in hexadecimal format
- `%d` - Print a decimal (base 10) number
- `%i` - Print an integer in base 10
- `%u` - Print an unsigned decimal (base 10) number
- `%x` - Print a number in hexadecimal (base 16) lowercase format
- `%X` - Print a number in hexadecimal (base 16) uppercase format
- `%%` - Print a percent sign

## 🚀 Getting Started

### Prerequisites
- GCC compiler
- Make
- Understanding of variadic functions

### Installation
```bash
git clone https://github.com/[your-username]/ft_printf.git
cd ft_printf
make
```

### Usage
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    return (0);
}
```

## 📚 Project Structure

```
ft_printf/
├── Makefile
├── ft_printf.c
├── ft_printf.h
├── srcs/
│   ├── ft_handle_char.c
│   ├── ft_handle_string.c
│   ├── ft_handle_pointer.c
│   ├── ft_handle_int.c
│   ├── ft_handle_uint.c
│   └── ft_handle_hex.c
└── README.md
```

## 🔍 Testing

Test your implementation with:
- All supported conversions
- Different combinations of flags
- Edge cases (NULL pointers, empty strings)
- Various numeric values (min/max integers)
- Compare output with the original printf

Example test file:
```c
int main(void)
{
    ft_printf("Characters: %c %c \n", 'a', 65);
    ft_printf("Strings: %s %s \n", "hello", "world");
    ft_printf("Pointers: %p\n", (void *)0x123456789);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Integer: %i\n", -42);
    ft_printf("Unsigned: %u\n", 4294967295);
    ft_printf("Hexadecimal: %x %X\n", 255, 255);
    ft_printf("Percent: %%\n");
    return (0);
}
```

## ⚠️ Requirements

- Don't implement the buffer management of the original printf
- Your function must be memory leak free
- Global variables are forbidden
- Must comply with 42 Norm
- Allowed functions: malloc, free, write, va_start, va_arg, va_copy, va_end

## 📋 Implementation Tips

1. Start with the basic conversions
2. Handle each conversion in separate functions
3. Use a dispatch table for different conversions
4. Test thoroughly with edge cases
5. Compare your output with the original printf
6. Watch for memory leaks
7. Handle error cases properly

