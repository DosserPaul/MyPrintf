/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int alpha;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            alpha = 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            alpha = 1;
        } else {
            return (0);
        }
    }

    return (alpha);
}