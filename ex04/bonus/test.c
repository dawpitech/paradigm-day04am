#include "../print.h"

int main(void)
{
    const char *str = "Hello world";

    do_action(PRINT_NORMAL, str);
    do_action(PRINT_REVERSE, str);
    do_action(PRINT_UPPER, str);
    do_action(PRINT_42, str);
    return 0;
}
