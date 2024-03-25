#include "lists.h"

/**
 * myStartupFun - Apply constructor attribute to mystartupfun
*/
void myStartupfun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implementation of myStartupFun
*/
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
