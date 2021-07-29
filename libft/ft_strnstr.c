#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (*needle == '\0')
		return ((char *)haystack);
	while (++i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[++j] == '\0')
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
