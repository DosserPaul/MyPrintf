/*
** EPITECH PROJECT, 2020
** MY_STRCPY
** File description:
** Copy the string, for transfer in varible dest
*/

int my_strlen (char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int nbCharS = my_strlen(src);

    dest[nbCharS + 1];

    for (; src[i] != '\0' && i != n; i++){
        dest[i] = src[i];
    }

    dest[i++] = '\0';

    return (dest);
}