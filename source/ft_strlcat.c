#include "../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src,	size_t destsize)
{
	size_t	dest_count;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	dest_count = 0;
	while (dest[dest_count] && dest_count < destsize)
		dest_count++;
	if (dest_count == destsize)
		return (dest_count + s_len);
	i = 0;
	while (src[i] && i < destsize - dest_count - 1)
	{
		dest[dest_count + i] = src[i];
		i++;
	}
	dest[dest_count + i] = 0;
	return (dest_count + s_len);
}
