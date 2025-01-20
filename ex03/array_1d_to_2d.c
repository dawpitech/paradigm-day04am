/*
** EPITECH PROJECT, 2025
** ex03
** File description:
** array_1d_to_2d.c
*/

#include <stdlib.h>

#include "array_1d_to_2d.h"

static void generate_2darray(const size_t height, const size_t width,
    int ***array)
{
    if (array == NULL)
        return;
    *array = calloc(height, sizeof(int *));
    for (size_t i = 0; i < height; i++) {
        (*array)[i] = calloc(width, sizeof(int));
    }
}

static void populate_2darray(const int *array, size_t height, size_t width,
    int ***res)
{
    int array_count = 0;

    for (size_t i = 0; i < height * width; i++) {
        (*res)[i / width][i % width] = array[array_count];
        array_count++;
    }
}

void array_1d_to_2d(const int *array, size_t height, size_t width, int ***res)
{
    if (array == NULL)
        return;
    generate_2darray(height, width, res);
    populate_2darray(array, height, width, res);
}

void array_2d_free(int **array, size_t height, size_t width)
{
    if (array == NULL)
        return;
    for (size_t i = 0; i < height; i++) {
        free(array[i]);
    }
    (void) width;
    free(array);
}
