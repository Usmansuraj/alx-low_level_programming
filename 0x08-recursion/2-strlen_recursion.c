#include "main.h"
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}

