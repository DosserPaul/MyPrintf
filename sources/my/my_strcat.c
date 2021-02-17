/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int nbCharD = my_strlen(dest);
    int nbCharS = my_strlen(src);
    dest[(nbCharD + 1) + (nbCharS + 1)];

    for (; src[i] != '\0'; i++){
        dest[i + nbCharD] = src[i];
    }

    dest[(i++) + nbCharD] = '\0';

    return (dest);
}