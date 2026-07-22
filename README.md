*This project has been created as part of the 42 curriculum by brechied.*

# ft_printf

## Description

`ft_printf` is a custom implementation of the standard C `printf()` function. The goal of this project is to understand how variadic functions work and reproduce the behavior of the mandatory `printf` conversions.

### Supported conversions

- `%c` Character
- `%s` String
- `%p` Pointer
- `%d` Decimal integer
- `%i` Integer
- `%u` Unsigned integer
- `%x` Hexadecimal (lowercase)
- `%X` Hexadecimal (uppercase)
- `%%` Percent sign

## Instructions

Build the library:

```bash
make
```

This creates:

```text
libftprintf.a
```

Available Makefile rules:

```bash
make
make clean
make fclean
make re
```

Include the header in your project:

```c
#include "ft_printf.h"
```

Compile with:

```bash
cc main.c libftprintf.a
```

## Technical Choices

The project is split into small helper functions, each responsible for printing a specific data type. The main `ft_printf()` function parses the format string and dispatches each conversion to the appropriate helper function. Variadic arguments are handled using the `stdarg.h` macros (`va_list`, `va_start`, `va_arg`, and `va_end`).

## Resources

- `man 3 printf`
- `man stdarg`

### AI Usage

ChatGPT was used as a learning tool to explain concepts such as variadic functions, hexadecimal conversion, pointer formatting and edge cases. All code was written, tested, and integrated by the author.

## Testers Used
Tripouille
mainprintf.c (Own tester)


