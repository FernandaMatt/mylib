#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*tdest;
	char	*tsrc;

	if (!dest && !src)
		return (NULL);
	tdest = dest;
	tsrc = (char *)src;
	if (tdest < tsrc)
	{
		while (len--)
			*tdest++ = *tsrc++;
	}
	else
	{
		tsrc += len - 1;
		tdest += len - 1;
		while (len--)
			*tdest-- = *tsrc--;
	}
	return (dest);
}
