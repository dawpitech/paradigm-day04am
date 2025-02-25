/*
** EPITECH PROJECT, 2025
** Paradigms Seminar
** File description:
** Exercise 04
*/

#ifndef PRINT_H
    #define PRINT_H

typedef enum action_e {
    PRINT_NORMAL,
    PRINT_REVERSE,
    PRINT_UPPER,
    PRINT_42,
    PRINT_COUNT /* Number of actions */
} action_t;

void print_normal(const char *str);
void print_reverse(const char *str);
void print_upper(const char *str);
void print_42(const char *str);
void do_action(action_t action, const char *str);

typedef struct {
    action_t action;
    void (*handler)(const char *str);
} action_handler_t;

static const action_handler_t action_handlers[] = {
    {PRINT_NORMAL, print_normal},
    {PRINT_REVERSE, print_reverse},
    {PRINT_UPPER, print_upper},
    {PRINT_42, print_42},
};

#endif
