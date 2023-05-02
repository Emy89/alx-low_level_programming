#include <unistd.h>


/**
 * _putchar - writes the characler c to stdout
 * &c:The character to print
 *
 * RETURN: on success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
