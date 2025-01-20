#include "../include/mul_div.h"
#include <stdio.h>

static void test_long ( void )
{
    int a = 13;
    int b = 4;
    int mul ;
    int div ;
    mul_div_long (a , b , & mul , & div ) ;
    printf ( " %d * %d = %d \n " , a , b , mul ) ;
    printf ( " %d / %d = %d \n " , a , b , div ) ;
}
static void test_short ( void )
{
    int a = 12;
    int b = 0;
    int mul_res = a ;
    int div_res = b ;
    mul_div_short (& mul_res , & div_res ) ;
    printf ( " %d * %d = %d \n " , a , b , mul_res ) ;
    printf ( " %d / %d = %d \n " , a , b , div_res ) ;
}
int main ( void )
{
    test_long () ;
    test_short () ;
    return (0) ;
}
