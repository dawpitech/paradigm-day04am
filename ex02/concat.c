/*
** EPITECH PROJECT, 2025
** paradigm-day04am
** File description:
** main C file
*/

#include <stdlib.h>
#include <string.h>

#include "include/concat.h"

void concat_strings(const char *str1, const char *str2, char **res)
{
    *res = calloc(1, strlen(str1) + strlen(str2) + 1);
    strcat(*res, str1);
    strcat(*res, str2);
}

void concat_struct(concat_t *str)
{
    str->res = calloc(1, strlen(str->str1) + strlen(str->str2) + 1);
    strcat(str->res, str->str1);
    strcat(str->res, str->str2);
}
