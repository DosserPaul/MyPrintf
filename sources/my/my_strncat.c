/*
** EPITECH PROJECT, 2020
** MY_STRNCAT
** File description:
** my_strncat
*/

int my_strlen (char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int nbCharD = my_strlen(dest);
    int nbCharS = my_strlen(src);
    dest[(nbCharD + 1) + (nbCharS + 1)];

    for (; src[i] != '\0' && i != nb; i++){
        dest[i + nbCharD] = src[i];
    }

    dest[(i++) + nbCharD] = '\0';

    return (dest);
}