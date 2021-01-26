/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** Free the table structure entirely.
*/

#include <stdlib.h>
#include "headers/struct.h"

void free_memory(t_table *table)
{
    for (int i = 0; i <= table->x; i++)
        free(table->board[i]);
    for (int i = 0; i <= table->x; i++)
        free(table->temp[i]);
    free(table->board);
    free(table->temp);
    free(table);
    return;
}