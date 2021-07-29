#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	res = (char *)malloc(sizeof(*res) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		if ((*f))
			res[i] = (*f)(i, s[i]);
		else
			res[i] = s[i];
	}		
	res[i] = '\0';
	return (res);
}
