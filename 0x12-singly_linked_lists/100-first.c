#include <stdio.h>


/**
 * print_before_main - Prints a string before the
 *        main function is executed.
 */

void before_main() __attribute__((constructor));
void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
