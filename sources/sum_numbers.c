/*
** EPITECH PROJECT, 2020
** SUM_NUMBERS
** File description:
** My_printf
*/

#include <stdarg.h>

int sum_numbers(int n, ...)
{
    int result = 0;
    va_list list;
    va_start(list, n);

    for (int i = 0; i < n; i++) {
        result += va_arg(list, int);
    }

    va_end(list);
    return result;
}