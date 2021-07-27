/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:02:58 by twagner           #+#    #+#             */
/*   Updated: 2021/06/12 08:03:00 by twagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
