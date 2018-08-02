/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 23:40:31 by mjacques          #+#    #+#             */
/*   Updated: 2018/08/01 23:43:04 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int value, int base)
{
	int		len;
	int		tmp;
	char	*str;
	char	*basetab;

	basetab = ft_strdup("0123456789ABCDEF");
	tmp = value;
	len = 1;
	while (tmp > base)
	{
		tmp = tmp / base;
		len++;
	}
	str = ft_strnew(len);
	while (value > base)
	{
		str[--len] = basetab[value % base];
		value = value / base;
	}
	str[0] = basetab[value % base];
	return (str);
}
