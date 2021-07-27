/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:03:59 by twagner           #+#    #+#             */
/*   Updated: 2021/06/12 08:04:03 by twagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_c_str(va_list ap, t_params *params, int *len)
{
	char	*res;
	char	*va;

	if (!params)
		return (NULL);
	va = va_arg(ap, char *);
	if (!va)
		va = "(null)";
	*len = ft_strlen(va);
	res = ft_strdup(va);
	if (!res)
		return (NULL);
	return (res);
}
