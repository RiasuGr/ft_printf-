#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dst && !src && n)
		return (NULL);
	while (++i < n)
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
	return (dst);
}
