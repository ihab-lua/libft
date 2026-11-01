*This project has been created as part of the 42 curriculum by ihhaioue.*

# Libft

## Description

Libft is a C static library developed as part of the 42 curriculum. Its goal is to recreate useful standard C library functions and implement additional utilities that can be reused in future C projects.

The project produces `libft.a` and provides 43 functions organized into three groups:

- **Libc functions:** Character classification and conversion, string manipulation, memory operations, `ft_atoi`, `ft_calloc`, and `ft_strdup`.
- **Additional functions:** Substring extraction, string joining and trimming, splitting, integer-to-string conversion, character iteration and mapping, and output to file descriptors.
- **Linked-list functions:** Node creation, insertion, traversal, counting, deletion, clearing, iteration, and mapping using the `t_list` structure.

All public function declarations and the `t_list` structure are defined in `libft.h`. Each function is implemented in its own `ft_*.c` file.

## Instructions

### Requirements

- C compiler (`cc`)
- Make
- `ar` archiver

### Compilation

Clone the repository and navigate to the project directory.

Compile the library using:

```bash
make
```

This generates the `libft.a` static library using the compiler flags `-Wall -Wextra -Werror`.

### Makefile Commands

```bash
make          # Compile the library
make all      # Compile the library
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Recompile everything
```

### Usage

Include the library header in your C program:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello from Libft!", 1);
    return (0);
}
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c ./libft.a -o program
```

Run the executable:

```bash
./program
```

## Resources

The following resources were used to understand C programming concepts and function behavior:

- **42 Libft Subject (v19.3):** Official project requirements and specifications.
- **C Manual Pages:** Reference documentation for standard C functions, including `strlen`, `memmove`, `calloc`, and `atoi`.
- **cppreference:** https://en.cppreference.com/w/c — Documentation about C language features, pointers, and memory management.
- **mycodeschool:** Educational videos explaining pointers, dynamic memory allocation, and linked lists.

### AI Usage

ChatGPT was used as a learning and revision tool to better understand C programming concepts, including pointers, double pointers, dynamic memory allocation, memory ownership, and linked lists.

It was also used to explain function behavior, discuss edge cases, review implementations, prepare for peer evaluations, and assist with writing this README.
