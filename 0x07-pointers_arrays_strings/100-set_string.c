#include "main.h"

/**
 * set_string = set value of pointer to char
 * @s: variable of type pointer
 * @to: char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
