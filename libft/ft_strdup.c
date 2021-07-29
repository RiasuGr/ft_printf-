#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = -1;
	if (!src)
	{
		dst[0] = 0;
		return (dst);
	}
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	if (!s1)
		len = 0;
	else
		len = ft_strlen(s1);
	dup = (char *)malloc(sizeof(*dup) * (len + 1));
	if (!dup)
		return (NULL);
	return (ft_strcpy(dup, s1));
}
