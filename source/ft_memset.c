#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n > 0)
	{
		ptr[n - 1] = c;
		n--;
	}
	return (s);
}
