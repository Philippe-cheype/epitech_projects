/*
** EPITECH PROJECT, 2020
** Error
** File description:
** Error handling
*/

#include <unistd.h>

#define WRONG_PARAMS    84
#define MEMORY          84
#define NOT_A_FILE      84
#define CORRUPT_TABLE   84

#define ERROR           write(2, "error\n", 6)
#define SYNTAX_ERROR    write(2, "syntax error\n", 13)
#define MEM_ERROR       write(2, "memory error\n", 13)
