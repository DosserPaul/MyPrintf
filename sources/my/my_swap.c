/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** my_swap
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int aStorage = *a;
    *a = *b;
    *b = aStorage;
}