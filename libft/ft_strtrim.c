#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	s1_len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		++s1;
	s1_len = ft_strlen(s1);
	while (ft_strchr(set, s1[s1_len - 1]) && s1_len)
		--s1_len;
	res = (char *)malloc(sizeof(*res) * (s1_len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, s1_len + 1);
	return (res);
}
