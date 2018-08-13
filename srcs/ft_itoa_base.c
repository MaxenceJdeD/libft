/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 23:40:31 by mjacques          #+#    #+#             */
/*   Updated: 2018/08/12 19:08:55 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_itoa_base(int64_t value, int base)
{
	static char	basetab[] = "0123456789abcdef";
	static char	str[65];
	uint64_t	tmp;
	char		*nstr;

	nstr = &str[64];
	tmp = value < 0 ? -value : value;
	while (tmp)
	{
		*--nstr = basetab[tmp % base];
		tmp = tmp / base;
	}
	if (value < 0 && base == 10)
		*--nstr = '-';
	return (nstr);
}
