#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = " hola ";
	//char	empty[] = "";
	char	*new_str = ft_strtrim(str, "");

	printf("%s\n", new_str);
	free(new_str);
	return (0);
}