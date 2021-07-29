#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;
	size_t	i;

	i = -1;
	tab = (void *)malloc(count * size);
	if (!tab)
		return (NULL);
	while (++i < (count * size))
		*((unsigned char *)tab + i) = 0;
	return (tab);
}
