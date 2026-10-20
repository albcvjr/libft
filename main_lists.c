#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*list;
	t_list	*node2;
	t_list	*node3;

	list = ft_lstnew("hola");
	if (list == NULL)
		return (-1);
	printf("El contenido de list es: %s\n", (char *)list->content);
	if (list->next == NULL)
		printf("El siguiente nodo es NULL\n");
	node2 = ft_lstnew("42");
	if (node2 == NULL)
	{
		free(list);
		return (-1);
	}
	printf("El contenido del node2 es: %s\n", (char *)node2->content);
	//list->next = node2;
	ft_lstadd_back(&list, node2);
	//ft_lstadd_back(&list, node2); o list->next = node2;
	printf("El numero de nodos de la lista es: %d\n", ft_lstsize(list));
	node3 = ft_lstnew("Madrid");
	if (node3 == NULL)
	{
		free(node2);
		free(list);
		return (-1);
	}
	printf("El contenido del node3 es: %s\n", (char *)node3->content);
	//node2->next = node3;
	ft_lstadd_back(&list, node3);
	printf("El numero de nodos de la lista es: %d\n", ft_lstsize(list));
	if (ft_lstlast(list) == node3)
		printf("El último nodo es node3\n");
	free(node3);
	free(node2);
	free(list);
	return (0);
}