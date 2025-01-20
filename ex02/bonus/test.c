#include "../include/concat.h"
#include <stdlib.h>
#include <stdio.h>

static void test_concat_strings ( void )
{
    char str1[] = "I find your lack of faith...";
    char str2[] = " disturbing.";
    char *res = NULL;
    concat_strings(str1, str2, &res);
    printf("%s\n", res);
    free(res);
}

static void test_concat_struct ( void )
{
    char str1[] = "These aren 't the Droids";
    char str2[] = " you ' re looking for.";
    concat_t str = {
        .str1 = str1,
        .str2 = str2,
        .res = NULL
    };
    concat_struct(& str );
    printf("%s\n", str.res);
    free(str.res);
}

int main(void)
{
    test_concat_strings();
    test_concat_struct();
    return(0);
}
