#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{	
		*((unsigned char *)s) = 0;
		++s;
	}
}
