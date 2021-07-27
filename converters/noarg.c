/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noarg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:03:44 by twagner           #+#    #+#             */
/*   Updated: 2021/06/12 08:03:45 by twagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_c_noarg(va_list ap, t_params *params, int *len)
{
	char	*res;

	if (!params)
		return (NULL);
	if (ap)
	{
		res = (char *)malloc(sizeof(*res) * 2);
		if (!res)
			return (NULL);
		res[0] = '%';
		res[1] = 0;
		*len = 1;
		return (res);
	}
	return (NULL);
}
