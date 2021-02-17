/*
** EPITECH PROJECT, 2020
** SUM_STRINGS_LENGHT
** File description:
** My_printf
*/

#include <stdarg.h>
#include "my.h"

int sum_strings_length(int n, ...)
{
    int nb_char = 0;

    va_list list;
    va_start(list, n);

    for (int i = 0; i < n; i++) {
        nb_char += my_strlen(va_arg(list, char*));
    }

    va_end(list);
    return nb_char;
}