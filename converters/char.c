#include "libft.h"
#include "ft_printf.h"

char	*ft_c_char(va_list ap, t_params *params, int *len)
{
	char	*res;
	char	c;

	if (!params)
		return (NULL);
	res = (char *)ft_calloc(2, 1);
	if (!res)
		return (NULL);
	c = va_arg(ap, int);
	res[0] = c;
	res[1] = 0;
	*len = 1;
	return (res);
}
