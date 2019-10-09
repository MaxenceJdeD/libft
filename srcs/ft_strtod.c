/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:55:14 by mjacques          #+#    #+#             */
/*   Updated: 2019/06/18 13:55:16 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	decimal_handle(char *str, char **endptr)
{
	double	decim;
	double	nbr;

	nbr = 0;
	decim = 0.1;
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr + (*str - 48) * decim;
		decim = decim / 10;
		++str;
	}
	*endptr = str;
	return (nbr);
}

double			ft_strtod(char *str, char **endptr)
{
	int		sign;
	double	nbr;

	while (*str && ft_isspace(*str))
		++str;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		++str;
	nbr = 0;
	while (*str && ft_isdigit(*str))
	{
		nbr = (nbr * 10) + *str - 48;
		++str;
	}
	if (*str == '.')
	{
		++str;
		nbr = nbr + decimal_handle(str, endptr);
	}
	else
		*endptr = str;
	return ((double)nbr * sign);
}
