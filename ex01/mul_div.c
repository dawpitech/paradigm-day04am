/*
** EPITECH PROJECT, 2025
** paradigm-day04am
** File description:
** main C file
*/

void mul_div_long(int a, int b, int *mul, int *div)
{
    *mul = a*b;
    if (b == 0)
        *div = 42;
    else
        *div = a/b;
}

void mul_div_short(int *a, int *b)
{
    *a = (*a)*(*b);
    if (*b == 0)
        *b = 42;
    else
        *b = (*a / *b) / *b;
}
