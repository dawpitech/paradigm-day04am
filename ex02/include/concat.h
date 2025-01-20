/*
** EPITECH PROJECT, 2025
** Paradigms Seminar
** File description:
** Exercise 02
*/

#ifndef CONCAT_H
    #define CONCAT_H

typedef struct concat_s {
    const char *str1;
    const char *str2;
    char *res;
} concat_t;

void concat_strings(const char *str1, const char *str2, char **res);
void concat_struct(concat_t *str);

#endif
