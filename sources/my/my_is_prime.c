/*
** EPITECH PROJECT, 2020
** MY_IS_PTIME
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    for (int i = 2; i <= nb; i++) {
        if ((nb % 2 == 0 || nb % 3 == 0)) {
            return (0);
        } else {
            return (1);
        }
    }
}