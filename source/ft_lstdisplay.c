#include "../include/libft.h"

void	ft_lstdisplay(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->content);
		lst = lst->next;
	}
}
