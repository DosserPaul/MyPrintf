/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** my_str_islower
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    int interger;
    int nbChar = my_strlen(str);

    if (nbChar == 0) {
        return (1);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            interger = 1;
        } else {
            return (0);
        }
    }

    return (interger);
}
