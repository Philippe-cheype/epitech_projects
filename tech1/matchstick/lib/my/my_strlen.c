/*
** EPITECH PROJECT, 2020
** My String Length
** File description:
** Counts String Length
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}
