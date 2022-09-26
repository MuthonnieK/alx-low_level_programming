#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: value being modified
 * @to: new value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
