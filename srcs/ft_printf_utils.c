#include "libft.h"
#include "ft_printf.h"

void	ft_putchar_count_fd(char c, int fd, int *count)
{
	++(*count);
	ft_putchar_fd(c, fd);
}

void	ft_memprint_fd(char *str, int len, int fd, int *count)
{
	int	i;

	i = 0;
	while (i < len)
		ft_putchar_count_fd(str[i++], fd, count);
}
