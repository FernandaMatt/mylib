#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptrdest;
	const char	*ptrsrc;

	if (!dest && !src)
		return (NULL);
	ptrdest = dest;
	ptrsrc = src;
	while (n > 0)
	{
		ptrdest[n - 1] = ptrsrc[n - 1];
		n--;
	}
	return (dest);
}
