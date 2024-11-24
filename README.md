# 🎯 Libft Project

## Introduction

The **Libft** project is a foundational exercise aimed at deepening your understanding of low-level memory management and function implementation in C programming.

## Grade


## Objective

The objective of this project is to implement a set of standard functions commonly used in C, along with some additional functions, forming your very own **Libft** library. This will serve as a crucial building block for future projects that rely on custom functions and memory management.

## Features

The library includes a variety of functions grouped into categories:

### Functions from `<ctype.h>`
- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is part of the ASCII character set.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a character to uppercase.
- `ft_tolower`: Converts a character to lowercase.

### Functions from `<string.h>`
- `ft_memset`: Fills a block of memory with a specified byte.
- `ft_strlen`: Computes the length of a string.
- `ft_bzero`: Sets a block of memory to zero.
- `ft_memcpy`: Copies memory from one location to another.
- `ft_memmove`: Moves memory from one location to another safely.
- `ft_strlcpy`: Copies a string to a specific size.
- `ft_strlcat`: Concatenates a string to a specific size.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_memchr`: Scans memory for a specific byte.
- `ft_memcmp`: Compares two memory areas.
- `ft_strnstr`: Finds a substring within a string.
- `ft_strdup`: Creates a duplicate of a string.

### Functions from `<stdlib.h>`
- `ft_atoi`: Converts a string to an integer.
- `ft_calloc`: Allocates memory and initializes it to zero.

### Non-Standard Functions
- `ft_substr`: Extracts a substring from a given string.
- `ft_strjoin`: Concatenates two strings into one.
- `ft_strtrim`: Trims leading and trailing characters from a string.
- `ft_split`: Splits a string into an array of substrings based on a delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string.
- `ft_striteri`: Applies a function to each character of a string using its index.
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### Linked List Functions
- `ft_lstnew`: Creates a new linked list node.
- `ft_lstadd_front`: Adds a new node at the beginning of a linked list.
- `ft_lstsize`: Returns the number of nodes in a linked list.
- `ft_lstlast`: Returns the last node of a linked list.
- `ft_lstadd_back`: Adds a new node at the end of a linked list.
- `ft_lstclear`: Clears and frees a linked list.
- `ft_lstiter`: Applies a function to each node of a linked list.
- `ft_lstmap`: Applies a function to each node of a linked list and returns a new list.

## Getting Started

To use the **Libft** library in your project:

1. Clone the repository:
   ```bash
   git clone https://github.com/amine-54/libft.git
2. Run make to compile the library:
   ```bash
   cd libft
   make
3. To clean up the compiled files, use:
   ```bash
   make clean
4. To fully clean up, use:
   ```bash
   make fclean
5. To recompile and clean everything, use:
   ```bash
   make re

   
