/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** my_str_isupper
*/

int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    int upper;
    int nbChar = my_strlen(str);

    if (nbChar == 0) {
        return (1);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper = 1;
        } else {
            return (0);
        }
    }

    return (upper);
}