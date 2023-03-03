#include "libft.h"

int	ft_strchri(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return (i + 1);
		i++;
	}
	if ((char)c == s[i])
		return (i + 1);
	return (0);
}
