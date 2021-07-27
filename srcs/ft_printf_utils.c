/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 08:28:59 by twagner           #+#    #+#             */
/*   Updated: 2021/06/20 08:29:02 by twagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
