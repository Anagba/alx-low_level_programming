
Kai-Deux /
alx-low_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Security

More
alx-low_level_programming/0x07-pointers_arrays_strings/1-memcpy.c
@Kai-Deux
Kai-Deux Task 1: memcpy
History
1 contributor
25 lines (19 sloc) 429 Bytes
#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	} /*END WHILE*/


	return (dest);
}
