/*
** EPITECH PROJECT, 2020
** DISPLAY_STRARGS
** File description:
** My_printf
*/

#include <stdarg.h>
#include "my.h"

void display_stdarg(char *s, ...)
{
    int nb = 0;
    va_list list;
    va_start(list, s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'c') {
            my_putstr(va_arg(list, char*));
            my_putchar('\n');
        } else if (s[i] == 's') {
            my_putstr(va_arg(list, char*));
            my_putchar('\n');
        } else if (s[i] == 'i') {
            nb = my_getnbr(va_arg(list, char*));
            my_put_nbr(nb);
            my_putchar('\n');
        }
    }

    va_end(list);
}