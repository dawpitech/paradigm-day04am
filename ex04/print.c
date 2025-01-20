/*
** EPITECH PROJECT, 2025
** ex04
** File description:
** print.c
*/

#include <stdio.h>

#include "print.h"

#include <ctype.h>
#include <string.h>

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    for (int i = (int) strlen(str); i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(const char *str)
{
    for (int i = 0; i < (int) strlen(str); i++)
        printf("%c", toupper(str[i]));
    printf("\n");
}

void print_42(const char *str)
{
    (void) str;
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    for (int i = 0; i < PRINT_COUNT; i++) {
        if (action_handlers[i].action == action) {
            action_handlers[i].handler(str);
            return;
        }
    }
}
