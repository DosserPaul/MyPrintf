/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int power)
{
    if (power == 0) {
        return (1);
    }
    if (power < 0) {
        return (0);
    }

    power = power - 1;

    int number = nb * my_compute_power_rec(nb, power);

    return(number);
}