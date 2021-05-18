#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = calloc(4, 1);
	s2 = ft_calloc(4, 1);

	s1[0] = 'a';
	s1[2] = 'a';
	s2[0] = 'a';
	s2[2] = 'a';

	for (int i = 0; i < 5; i++)
	{
		printf("%c", s1[i]);
	}
	printf("\n");

	for (int j = 0; j < 5; j++)
	{
		printf("%c", s2[j]);
	}
	printf("\n");

	free(s1);
	free(s2);
}
