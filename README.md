# Ft_printf

Ft_printf is a custom implementation of the standard `printf` function in C. This project introduces the concept of variadic functions, providing us with the skills to handle variable numbers of arguments. The goal is to create a versatile and efficient alternative to `printf`, handling a variety of conversions and flags.

## Table of Contents

- [Introduction](#introduction)
- [Functions Overview](#functions-overview)
- [Compilation](#compilation)
- [Usage](#usage)

## Introduction

The goal of the Ft_printf project is to recode the C library function `printf()`. This project focuses on understanding variadic functions and building a well-structured, extensible codebase.

## Functions Overview

Ft_printf must handle the following conversions:

- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer in hexadecimal format.
- `%d`: Prints a decimal number.
- `%i`: Prints an integer.
- `%u`: Prints an unsigned decimal number.
- `%x`: Prints a number in lowercase hexadecimal.
- `%X`: Prints a number in uppercase hexadecimal.
- `%%`: Prints a literal percent sign.

The function prototype is:

```c
int ft_printf(const char *, ...);
```
It behaves similarly to the standard `printf` function, but without the buffer management present in the original.

## Compilation

To compile the `ft_printf` library, run the following command:

```bash
make
```
This will create the `libftprintf.a` library, which can be linked to other C programs.

To clean object files:

```bash
make clean
```

To remove all compiled files, including the library:

```bash
make fclean
```

To recompile everything from scratch:

```bash
make re
```

## Usage

You can use `ft_printf` in your programs similarly to the standard `printf`. Include the `ft_printf.h` header file and link the `libftprintf.a` library.

Example:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
