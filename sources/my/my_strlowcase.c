/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i];
        } else {
            str[i] = str[i] + 32;
        }
    }

    return (str);
}