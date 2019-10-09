/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:29:43 by mjacques          #+#    #+#             */
/*   Updated: 2018/08/12 19:08:57 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*str;
	size_t			size;
	unsigned int	nbr;

	nbr = (n < 0) ? -n : n;
	size = (n < 0) ? 1 : 0;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		++size;
	}
	if (!(str = ft_strnew(size)))
		return (NULL);
	nbr = (n < 0) ? -n : n;
	while (nbr > 0)
	{
		str[--size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
