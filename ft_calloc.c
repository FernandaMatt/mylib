#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	i = count * size - 1;
	while (i >= 0)
		((char *)ptr)[i--] = 0;
	return (ptr);
}
