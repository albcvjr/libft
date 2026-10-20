#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char str[] = "bananas";

	printf("strlen de str recibido: %zu\n", ft_strlen(str));
	printf("strchr de str recibido: %s\n", ft_strchr(str, 'a'));
	printf("strrchr de str recibido: %s\n", ft_strrchr(str, 'a'));
	printf("strchr sin coincidencia: %p\n", (void *)ft_strchr(str, 'z'));
	printf("strrchr sin coincidencia: %p\n", (void *)ft_strrchr(str, 'z'));
	printf("strchr con terminador: '%s'\n", ft_strchr(str, '\0'));
	printf("strchr con terminador es NULL: %d\n", ft_strchr(str, 'z') == NULL);
	return (0);
}