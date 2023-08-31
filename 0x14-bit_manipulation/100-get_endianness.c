#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *endian = (char *)&n;
	
	return (*endian == 1);
}
