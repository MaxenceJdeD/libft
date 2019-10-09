/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 20:03:40 by mjacques          #+#    #+#             */
/*   Updated: 2018/08/12 19:09:53 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char			str[13];
	size_t			size;
	unsigned int	nbr;

	nbr = (n < 0) ? -n : n;
	size = (n < 0) ? 1 : 0;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		++size;
	}
	str[size] = '\0';
	nbr = (n < 0) ? -n : n;
	while (nbr > 0)
	{
		str[--size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	ft_putstr(str);
}
