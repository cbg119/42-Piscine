/*
 *
 *  TEST MAIN FRAMEWORK.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "ft_strlcpy.c"

int     main(int ac, char *av[])
{
    (void)ac;
    char dest[100];
    char dest1[100];
	printf("Real: %zu\n", strlcpy(dest, av[1], atoi(av[2])));
	printf("%s\n\n", dest);
	printf("Mine: %d\n", ft_strlcpy(dest1, av[1], atoi(av[2])));
	printf("%s\n", dest1);
    return(0);
}
