*This project was developed as part of the 42 curriculum by albben-a*
# libft
## Description

**Libft** is the first project of the 42 cursus and consists of creating a personal library in the C programming language.  
The main goal is to understand the internal behavior of standard C functions, learn how to manage memory manually, and build a solid foundation that will be useful in future projects.

This library reimplements functions from the libc, adds additional utilities, and provides tools to handle singly linked lists, strictly following the specifications described in the `man` pages and the 42 Norminette.

---

## Instructions

### Compilation

The project includes a `Makefile` with standard rules. To compile the library, run:

```bash
make
```

This will generate the static library file:

```bash
libft.a
```

### Available Rules

- `make` → Compiles the library.
- `make clean` → Removes object files (`.o`).
- `make fclean` → Removes object files and `libft.a`.
- `make re` → Cleans and recompiles everything from scratch.

### Using the Library in Other Projects

Include the header file and link the library when compiling:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

---

## Library Description

The library is divided into three main parts: libc functions, additional functions, and linked list utilities.

---

### Character Classification Functions

- **ft_isalpha**  
  Checks whether a character is a letter (A–Z or a–z).

- **ft_isdigit**  
  Checks whether a character is a numeric digit (0–9).

- **ft_isalnum**  
  Checks whether a character is alphanumeric.

- **ft_isascii**  
  Determines whether a character belongs to the ASCII table.

- **ft_isprint**  
  Checks whether a character is printable.

---

### String Manipulation Functions

- **ft_strlen**  
  Returns the length of a string.

- **ft_strchr**  
  Locates the first occurrence of a character in a string.

- **ft_strrchr**  
  Locates the last occurrence of a character in a string.

- **ft_strncmp**  
  Compares two strings up to a specified number of characters.

- **ft_strnstr**  
  Searches for a substring within a limited number of characters.

- **ft_strdup**  
  Duplicates a string by allocating new memory.

- **ft_substr**  
  Extracts a substring from a given string.

- **ft_strjoin**  
  Concatenates two strings into a newly allocated string.

- **ft_strtrim**  
  Removes specified characters from the beginning and end of a string.

- **ft_split**  
  Splits a string into an array of strings using a delimiter.

- **ft_strmapi**  
  Applies a function to each character and creates a new string.

- **ft_striteri**  
  Applies a function to each character, modifying the original string.

---

### Memory Functions

- **ft_memset**  
  Fills a block of memory with a specific value.

- **ft_bzero**  
  Sets a block of memory to zero.

- **ft_memcpy**  
  Copies memory from one area to another without overlap.

- **ft_memmove**  
  Copies memory allowing overlapping areas.

- **ft_memchr**  
  Searches for a specific byte in a block of memory.

- **ft_memcmp**  
  Compares two blocks of memory byte by byte.

- **ft_calloc**  
  Allocates memory and initializes all bytes to zero.

---

### Conversion Functions

- **ft_atoi**  
  Converts a string to an integer.

- **ft_itoa**  
  Converts an integer to a string.

- **ft_tolower**  
  Converts an uppercase letter to lowercase.

- **ft_toupper**  
  Converts a lowercase letter to uppercase.

---

### Output Functions

- **ft_putchar_fd**  
  Writes a character to a file descriptor.

- **ft_putstr_fd**  
  Writes a string to a file descriptor.

- **ft_putendl_fd**  
  Writes a string followed by a newline to a file descriptor.

- **ft_putnbr_fd**  
  Writes an integer to a file descriptor.

---

### Bonus – Linked List Functions

- **ft_lstnew**  
  Creates a new linked list node.

- **ft_lstadd_front**  
  Adds a node at the beginning of the list.

- **ft_lstadd_back**  
  Adds a node at the end of the list.

- **ft_lstsize**  
  Returns the number of nodes in the list.

- **ft_lstlast**  
  Returns the last node of the list.

- **ft_lstdelone**  
  Deletes a node using a given delete function.

- **ft_lstclear**  
  Deletes and frees all nodes of the list.

- **ft_lstiter**  
  Iterates through the list applying a function to each node.

- **ft_lstmap**  
  Creates a new list by applying a function to each node.

---

## Resources

### Technical References

- Linux manuals (`man`)
- Peer-to-peer learning
- GeeksforGeeks (for more in-depth explanations of some functions)

### Use of Artificial Intelligence

AI has been used exclusively as theoretical support to understand the expected behavior of the functions, based on the `man` pages, in order to correctly interpret their prototypes, return values, and edge cases.
