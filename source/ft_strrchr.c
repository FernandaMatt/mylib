#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((s));
	if (!i && (unsigned char)c)
		return (NULL);
	while ((int)i >= 0)
	{
		if ((unsigned char)c == (unsigned char)s[i])
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
