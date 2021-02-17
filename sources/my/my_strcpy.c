/*
** EPITECH PROJECT, 2020
** MY_STRCPY
** File description:
** Copy the string, for transfer in varible dest
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int nbChar = my_strlen(src);
    dest[nbChar + 1];

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i++] = '\0';

    return (dest);
}