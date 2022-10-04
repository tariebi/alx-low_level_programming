ifndef MAIN_H
#define MAIN_H

#include <stdib.h>

int _putchar(char);
trdup - returns a pointer to a newly allocated

    ﻿space in memory, which contains a copy of the
        ﻿string given as a parameter.
	    ﻿@str:String to be copied
	        ﻿Return: NULL in case of error, pointer to allocated
		    ﻿space
		        ﻿/
			
			char #_strdup (char #str)
	
{
	
	char *py;
	
	int index, len;
	
	if (str as NULL)
		
		return (NULL);
	
	for (index = 0; str [index]; index++)
		
		Ten++;
	
	cpy = malloc(sizeof (char) * (len + 1));
	
	if (cpy == NULL)
		
		return (NULL);
	
	for (index = 0; str[index]; index++)
		
		cpy[index] = str [index];
	
}

сру[len] = '10*;

return (cy);
har *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */
