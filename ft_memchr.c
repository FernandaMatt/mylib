#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((char)c == ((char)((char *)s)[i++]))
			return ((void *)s + --i);
	}
	return (0);
}
