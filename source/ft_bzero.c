#include "../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n > 0)
	{
		ptr[n - 1] = 0;
		n--;
	}
}
