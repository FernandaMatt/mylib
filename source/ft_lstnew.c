#include "../include/libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->index = 0;
	node->next = NULL;
	return (node);
}
