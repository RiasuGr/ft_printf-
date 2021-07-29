#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	rlen;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	rlen = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(*res) * (rlen + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s1)
	{
		res[i++] = *s1;
		++s1;
	}
	while (*s2)
	{
		res[i++] = *s2;
		++s2;
	}
	res[i] = '\0';
	return (res);
}
